CC = gcc
CC_FLAGS = -ansi -o -g -pedantic -Wall -w

FILES = Assign2.c Node.c Node.h 
OUT_EXE = Assign2

build: $(FILES)
	$(CC) $(CC_FLAGS) -o $(OUT_EXE) $(FILES)

clean:
	rm -f *.o core *.exe *~ *.out *.stackdump

rebuild: clean build
