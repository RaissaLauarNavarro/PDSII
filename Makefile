CC := g++
FLAGS := -Wall
TARGET := main.out

all: main

clean:
	$(RM) -r *.o *.out $(TARGET)

terminalPallete:
	$(CC) $(FLAGS) -c TerminalPalette.hpp -o tPalette.o

storeManagerTemplate:
	$(CC) $(FLAGS) -c StorageManager.tpp -o sManagerTemp.o

storeManager: storeManagerTemplate
	$(CC) $(FLAGS) -c StorageManager.hpp -o sManager.o

itemsStorage:
	$(CC) $(FLAGS) -c ItemsStorage.hpp -o itemsStorage.o

