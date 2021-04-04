require 'forwardable'

require 'shellwords'

module MRuby
  class Command
    include Rake::DSL
    extend Forwardable
    def_delegators :@build, :filename, :objfile, :libfile, :exefile, :cygwin_filename, :convert_mode
    attr_accessor :build, :command

    def initialize(build)
      @build = build
    end

    # clone is deep clone without @build
    def clone
      target = super
      excepts = %w(@build)
      instance_variables.each do |attr|
        unless excepts.include?(attr.to_s)
          val = Marshal::load(Marshal.dump(instance_variable_get(attr))) # deep clone
          target.instance_variable_set(attr, val)
        end
      end
      target
    end

    NotFoundCommands = {}

    def convert_paths(&block)
      mode = convert_mode
      mode = :NOTHING if mode.nil?
      Pathnamex.yield_convert_mode(mode) do
        block.call
      end
    end
    
    private
    
    def _make_arg(command, options, params)
      command + ' ' + ( options % params )
    end
    
    def _run(options, params={})
      #      return sh  if NotFoundCommands.key? @command
      p _make_arg(command, options, params)
      return sh command + ' ' + ( options % params ) if NotFoundCommands.key? @command
      begin
        sh build.filename(command) + ' ' + ( options % params )
      rescue RuntimeError
        NotFoundCommands[@command] = true
        _run options, params
      end
    end
  end

  class Command::Compiler < Command
    attr_accessor :flags, :include_paths, :defines, :source_exts
    attr_accessor :compile_options, :option_define, :option_include_path, :out_ext
    attr_accessor :cxx_compile_flag, :cxx_exception_flag
    def initialize(build, source_exts=[])
      super(build)
      @command = ENV['CC'] || 'cc'
      @flags = [ENV['CFLAGS'] || []]
      @source_exts = source_exts
      @include_paths = [Pathnamex.new(MRUBY_ROOT).join('include')]
      @defines = %w()
      @option_include_path = '-I%s'
      @option_define = '-D%s'
      @compile_options = '%{flags} -o %{outfile} -c %{infile}'
    end

    alias header_search_paths include_paths
    def search_header_path(name)
      header_search_paths.find do |v|
        File.exist? build.filename("#{v}/#{name}").sub(/^"(.*)"$/, '\1')
#        Pathnamex.new(build.filename("#{v}/#{name}").sub(/^"(.*)"$/, '\1')).exist?
      end
    end

    def search_header(name)
      path = search_header_path name
      Pathnamex.new(path).join( build.filename("#{path}/#{name}").sub(/^"(.*)"$/, '\1') )
#      path && build.filename("#{path}/#{name}").sub(/^"(.*)"$/, '\1')
    end

    def all_flags(_defines=[], _include_paths=[], _flags=[])
      #      define_flags = [defines, _defines].flatten.map{ |d| option_define % d.chomp }
      define_flags = [defines, _defines].flatten.map { |d| option_define % d.chomp }

      mode = MRUBY_BUILD_HOST_IS_CYGWIN ? convert_mode : :NOTHING

      include_path_flags = yield_convert_mode(mode) do
        make_option(include_paths, _include_paths, option_include_path)
      end
      [flags, define_flags, include_path_flags, _flags].flatten.join(' ')
    end

    def run(outfile, infile, _defines=[], _include_paths=[], _flags=[])
      FileUtils.mkdir_p File.dirname(outfile)
      _pp "CC", infile.relative_path, outfile.relative_path
      if MRUBY_BUILD_HOST_IS_CYGWIN
        if convert_mode == :CYGWIN_TO_WIN || convert_mode == :CYGWIN_TO_WIN_WITH_ESCAPE
          infile, outfile = convert_from_cygwin_paths_to_win_paths([infile, outfile])
        end
        hash = { :flags => all_flags(_defines, _include_paths, _flags),
                 :infile => infile, :outfile => outfile }
        _run compile_options, hash
      else
        _run compile_options, { :flags => all_flags(_defines, _include_paths, _flags),
                                :infile => filename(infile), :outfile => filename(outfile) }
      end
    end

    def define_rules(build_dir, source_dir='')
      @out_ext = build.exts.object
      gemrake = File.join(source_dir, "mrbgem.rake")
      rakedep = File.exist?(gemrake) ? [ gemrake ] : []

      if build_dir.include? "mrbgems/"
        generated_file_matcher = Regexp.new("^#{Regexp.escape build_dir}/(.*)#{Regexp.escape out_ext}$")
      else
        generated_file_matcher = Regexp.new("^#{Regexp.escape build_dir}/(?!mrbgems/.+/)(.*)#{Regexp.escape out_ext}$")
      end
      source_exts.each do |ext, compile|
        rule generated_file_matcher => [
          proc { |file|
            file.sub(generated_file_matcher, "#{source_dir}/\\1#{ext}")
          },
          proc { |file|
            get_dependencies(file) + rakedep
          }
        ] do |t|
          run t.name, t.prerequisites.first
        end

        rule generated_file_matcher => [
          proc { |file|
            file.sub(generated_file_matcher, "#{build_dir}/\\1#{ext}")
          },
          proc { |file|
            get_dependencies(file) + rakedep
          }
        ] do |t|
          run t.name, t.prerequisites.first
        end
      end
    end

    private
    def get_dependencies(file)
      file = file.ext('d') unless File.extname(file) == '.d'
      if File.exist?(file)
        File.read(file).gsub("\\\n ", "").scan(/^\S+:\s+(.+)$/).flatten.map {|s| s.split(' ') }.flatten
      else
        []
      end + [ MRUBY_CONFIG ]
    end

    #
    def make_option(include_paths, _include_paths, option_include_path)
      [include_paths, _include_paths].flatten.map do |f|
        p "option_include_path=#{option_include_path}"
        p "f.class=#{f.class}"
        p "f.to_s=#{f.to_s}"
        p "f.class=#{f.class}"
        p "f=#{f}"
        f2 = if f.instance_of?(Pathnamex)
               p '1 f2'
               Shellwords.escape(f.to_s.chomp)
             else
               p '2 f2'
               Shellwords.escape(Pathnamex.new(f.chomp).to_s.chomp)
             end
        p "f2=#{f2}"
        option_include_path % f2
      end
    end
    
    def convert_from_cygwin_paths_to_win_paths(array)
      yield_convert_mode(convert_mode) do 
        array.map do |path|
          if path.instance_of?(Pathnamex)
            path = path.to_s
          end
          convert_from_cygwin_path_to_win_path(path)
        end
      end
    end
    
    def convert_from_cygwin_path_to_win_path(path)
      Shellwords.escape(Pathnamex.new(path.chomp).to_s.chomp)
    end

    def yield_convert_mode(mode, &block)
      if block
        if MRUBY_BUILD_HOST_IS_CYGWIN
          original_convert_mode = Pathnamex.get_convert_mode
          Pathnamex.set_convert_mode(mode)
          ret = block.call
          Pathnamex.set_convert_mode(original_convert_mode)
          ret
        end
      end
    end
  end

  class Command::Linker < Command
    attr_accessor :flags, :library_paths, :flags_before_libraries, :libraries, :flags_after_libraries
    attr_accessor :link_options, :option_library, :option_library_path

    def initialize(build)
      super
      @command = ENV['LD'] || 'ld'
      @flags = (ENV['LDFLAGS'] || [])
      @flags_before_libraries, @flags_after_libraries = [], []
      @libraries = []
      @library_paths = []
      @option_library = '-l%s'
      @option_library_path = '-L%s'
      @link_options = "%{flags} -o %{outfile} %{objs} %{flags_before_libraries} %{libs} %{flags_after_libraries}"
    end

    def all_flags(_library_paths=[], _flags=[])
      library_path_flags = [library_paths, _library_paths].flatten.map do |f|
        option_library_path % f.to_s
      end
=begin
      library_path_flags = [library_paths, _library_paths].flatten.map do |f|
        if MRUBY_BUILD_HOST_IS_CYGWIN
          option_library_path % Pathnamex.new(f)
        else
          option_library_path % filename(f)
        end
      end
=end
      [flags, library_path_flags, _flags].flatten.join(' ')
    end

#    def library_flags(_libraries)
#      [libraries, _libraries].flatten.map{ |d| option_library % d.to_s }.join(' ')
#    end

    def run(outfile, objfiles, _libraries=[], _library_paths=[], _flags=[], _flags_before_libraries=[], _flags_after_libraries=[])
      mode = MRUBY_BUILD_HOST_IS_CYGWIN ? convert_mode : :NOTHING
      objs = nil
      library_flags , outfile, objs = Pathnamex.yield_convert_mode(mode) do
        FileUtils.mkdir_p File.dirname(outfile)
        library_flags = [libraries, _libraries].flatten.map { |d| option_library % d.to_s }

        _pp "LD", outfile.relative_path

        outfile, *objs = [outfile, objfiles].flatten.map do |f|
          p "f=#{f}"
          f.to_s
        end
        [library_flags , outfile, objs]
      end
      _run link_options, { :flags => all_flags(_library_paths, _flags),
                           :outfile => Pathnamex.new(outfile) , :objs => objs.join(' '),
                           :flags_before_libraries => [flags_before_libraries, _flags_before_libraries].flatten.join(' '),
                           :flags_after_libraries => [flags_after_libraries, _flags_after_libraries].flatten.join(' '),
                           :libs => library_flags.join(' ') }
      
=begin
      if MRUBY_BUILD_HOST_IS_CYGWIN
        _run link_options, { :flags => all_flags(_library_paths, _flags),
                             :outfile => Pathnamex.new(outfile) , :objs => objfiles.map { |x| Pathnamex.new(x) }.join(' '),
                             :flags_before_libraries => [flags_before_libraries, _flags_before_libraries].flatten.join(' '),
                             :flags_after_libraries => [flags_after_libraries, _flags_after_libraries].flatten.join(' '),
                             :libs => library_flags.join(' ') }
      else
        _run link_options, { :flags => all_flags(_library_paths, _flags),
                             :outfile => filename(outfile) , :objs => filename(objfiles).join(' '),
                             :flags_before_libraries => [flags_before_libraries, _flags_before_libraries].flatten.join(' '),
                             :flags_after_libraries => [flags_after_libraries, _flags_after_libraries].flatten.join(' '),
                             :libs => library_flags.join(' ') }
      end
=end
    end
  end

  class Command::Archiver < Command
    attr_accessor :archive_options

    def initialize(build)
      super
      @command = ENV['AR'] || 'ar'
      @archive_options = 'rs %{outfile} %{objs}'
    end

    def run(outfile, objfiles)
      FileUtils.mkdir_p File.dirname(outfile)
      _pp "AR", outfile.relative_path

      mode = convert_mode
      mode = :NOTHING if mode.nil?
      objs = nil
      outfile, objs = Pathnamex.yield_convert_mode(mode) do
#        [outfile, objfiles].flatten.map do |f|
        [outfile, objfiles].map do |f|
          Pathnamex.convert_paths(f)
        end
=begin        
        outfile, *objs = [outfile, objfiles].flatten.map do |f|
          Pathnamex.convert_paths(f)
        end
        [outfile, objs]
=end
      end
      _run archive_options, { :outfile => outfile, :objs => objs.join(' ') }
=begin
      if MRUBY_BUILD_HOST_IS_CYGWIN
        _run archive_options, { :outfile => Pathnamex.new(outfile), :objs => objfiles.map { |x| Pathnamex.new(x) }.join(' ') }
      else
        _run archive_options, { :outfile => filename(outfile), :objs => filename(objfiles).join(' ') }
      end
=end
    end
  end

  class Command::Yacc < Command
    attr_accessor :compile_options

    def initialize(build)
      super
      @command = 'bison'
      @compile_options = '-o %{outfile} %{infile}'
    end

    def run(outfile, infile)
      FileUtils.mkdir_p File.dirname(outfile)
      _pp "YACC", infile.relative_path, outfile.relative_path
      _run compile_options, { :outfile => filename(outfile) , :infile => filename(infile) }
    end
  end

  class Command::Gperf < Command
    attr_accessor :compile_options

    def initialize(build)
      super
      @command = 'gperf'
      @compile_options = '-L ANSI-C -C -p -j1 -i 1 -g -o -t -N mrb_reserved_word -k"1,3,$" %{infile} > %{outfile}'
    end

    def run(outfile, infile)
      FileUtils.mkdir_p File.dirname(outfile)
      _pp "GPERF", infile.relative_path, outfile.relative_path
      _run compile_options, { :outfile => filename(outfile) , :infile => filename(infile) }
    end
  end

  class Command::Git < Command
    attr_accessor :flags
    attr_accessor :clone_options, :pull_options, :checkout_options

    def initialize(build)
      super
      @command = 'git'
      @flags = %w[]
      @clone_options = "clone %{flags} %{url} %{dir}"
      @pull_options = "pull"
      @checkout_options = "checkout %{checksum_hash}"
    end

    def run_clone(dir, url, _flags = [])
      _pp "GIT", url, dir.relative_path
      _run clone_options, { :flags => [flags, _flags].flatten.join(' '), :url => url, :dir => filename(dir) }
    end

    def run_pull(dir, url)
      root = Dir.pwd
      Dir.chdir dir
      _pp "GIT PULL", url, dir.relative_path
      _run pull_options
      Dir.chdir root
    end

    def run_checkout(dir, checksum_hash)
      root = Dir.pwd
      Dir.chdir dir
      _pp "GIT CHECKOUT", checksum_hash
      _run checkout_options, { :checksum_hash => checksum_hash }
      Dir.chdir root
    end
  end

  class Command::Mrbc < Command
    attr_accessor :compile_options

    def initialize(build)
      super
      @command = nil
      @compile_options = "-B%{funcname} -o-"
    end

    def run(out, infiles, funcname)
      @command ||= @build.mrbcfile
      infiles = [infiles].flatten
      infiles.each do |f|
        _pp "MRBC", f.relative_path, nil, :indent => 2
      end
      IO.popen("#{filename @command} #{@compile_options % {:funcname => funcname}} #{filename(infiles).join(' ')}", 'r+') do |io|
        out.puts io.read
      end
      # if mrbc execution fail, drop the file
      if $?.exitstatus != 0
        File.delete(out.path)
        exit(-1)
      end
    end
  end

  class Command::CrossTestRunner < Command
    attr_accessor :runner_options
    attr_accessor :verbose_flag
    attr_accessor :flags

    def initialize(build)
      super
      @command = nil
      @runner_options = '%{flags} %{infile}'
      @verbose_flag = ''
      @flags = []
    end

    def run(testbinfile)
      puts "TEST for " + @build.name
      _run runner_options, { :flags => [flags, verbose_flag].flatten.join(' '), :infile => testbinfile }
    end
  end

end
