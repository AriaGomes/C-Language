CC = gcc
CC_FLAGS = -ansi -g -pedantic -Wall -W -std=c89

FILES = lab 1 - C.c 
OUT_EXE = lab1

build: $(FILES)
	$(CC) $(CC_FLAGS) -o $(OUT_EXE) $(FILES)

clean:
	rm -f *.o core *.exe *~ *.out *.stackdump

rebuild: clean build
