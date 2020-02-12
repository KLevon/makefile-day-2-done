
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

../build/libutils.a: ../build/add.o ../build/sub.o
	ar -rsv ../build/libutils.a ../build/add.o ../build/sub.o

../build/add.o: add.c add.h
	gcc -c add.c -o ../build/add.o

../build/sub.o: add.c sub.h
	gcc -c sub.c -o ../build/sub.o
	