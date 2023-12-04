CC := g++
FLAGS := -Wall
TARGET := main.out

all: main

clean:
	$(RM) -r *.o *.out $(TARGET)

terminalPallete:
	$(CC) $(FLAGS) -c TerminalPalette.hpp -o tPalette.o

