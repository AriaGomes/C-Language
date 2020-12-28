CC = gcc
CC_FLAGS = -Wall -ansi -pedantic

FILES = main.c users.h commands.h tools.h commands.c commands.h defs.h tools.c tools.h users.c users.h
OUT_EXE = lab3

build: $(FILES)
	$(CC) $(CC_FLAGS) -o $(OUT_EXE) $(FILES)

clean:
	rm -f *.o core *.exe *~ *.out *.stackdump

rebuild: clean build