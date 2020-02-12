
# GOAL:
#    compile main.c file
#    link object file with previously made static libraries into an executable
#    all files must be created in ../build directory
#
# HELP:
#    main target of this makefile is final executable. It depends on object files
#    and static libraries.
#    compile source file gcc cmd:
#        gcc -c [source_file] -I[headers_path] -o [object_name]
#    link libraries and object files
#        gcc [object_files] [path to libraries with prefix -L] [library names with prefix -l] -o main.exe
#

../build/main.exe: ../build/*.a ../build/main.o
	gcc ../build/main.o -L../build -lutils -lprinter -lnothing -o ../build/main.exe

../build/main.o: main.c ../1_utils/*.h ../2_printer/include/*.h ../3_nothing/include/*.h
	gcc -c main.c -I../1_utils -I../2_printer/include -I../3_nothing/include -o ../build/main.o


