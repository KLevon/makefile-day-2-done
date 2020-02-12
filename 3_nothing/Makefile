
# GOAL:
#    compile all .c files
#    link object files into static library
#    all files must be created in ../build directory
#
# HELP:
#    main target of this makefile is static library. That library is built last,
#    it depends on object files. Object files depend on source files and headers.
#    compile source file gcc cmd:
#        gcc -c [source_file] -I[headers_path] -o [object_name]
#    create archive gcc cmd:
#        ar -rvs [library_name] [list_object_files]
#

../build/libnothing.a: ../build/everything.o ../build/nothing.o
	ar -rsv ../build/libnothing.a ../build/everything.o ../build/nothing.o

../build/everything.o: src/everything.c include/*.h
	gcc -c src/everything.c -Iinclude -o ../build/everything.o

../build/nothing.o: src/nothing.c include/*.h
	gcc -c src/nothing.c -Iinclude -o ../build/nothing.o

