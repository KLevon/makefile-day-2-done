
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

../build/libprinter.a: ../build/printer.o ../build/shower.o
	ar -rsv ../build/libprinter.a ../build/printer.o ../build/shower.o

../build/printer.o: src/printer.c include/printer.h
	gcc -c src/printer.c -Iinclude -o ../build/printer.o

../build/shower.o: src/shower.c include/shower.h
	gcc -c src/shower.c -Iinclude -o ../build/shower.o

