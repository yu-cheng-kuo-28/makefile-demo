# This Makefile builds the program myProgram from abc.c, xyz.c, and main.c

# The default target:
all: myProgram

# The main program depends on object files.
myProgram: abc.o xyz.o main.o
	gcc -o myProgram abc.o xyz.o main.o

# Each .o file depends on its corresponding .c file.
abc.o: abc.c abc.h
	gcc -c abc.c

xyz.o: xyz.c xyz.h
	gcc -c xyz.c

main.o: main.c xyz.h
	gcc -c main.c

# The clean rule for cleaning up
clean:
	rm -f abc.o xyz.o main.o myProgram

