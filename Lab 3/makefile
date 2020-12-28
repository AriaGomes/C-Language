CC = gcc
CC_FLAGS = -ansi -g -pedantic -Wall -W -std=c89

main: main.o users.o commands.o tools.o
		cc -o main main.o users.o commands.o tools.o $(CFLAGS) $(LDFLAGS)
		
tools: tools.o defs.o
		cc -o tools tools.o defs.o $(CFLAGS) $(LDFLAGS)
		
users: users.o
		cc -o users users.o $(CFLAGS) $(LDFLAGS)
		
commands: commands.o defs.o
		cc -o commands commands.o defs.o $(CFLAGS) $(LDFLAGS)
		
build: $(FILES)
	$(CC) $(CC_FLAGS) -o $(OUT_EXE) $(FILES)

clean:
	rm -f *.o core *.exe *~ *.out *.stackdump

rebuild: clean build