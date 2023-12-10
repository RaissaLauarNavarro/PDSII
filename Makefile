CC := g++
FLAGS := -Wall
TARGET := main.out

build: clean main

run:
	./main.out

test: tests
	./tests.out

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

item: itemsStorage
	$(CC) $(FLAGS) -c Item.cpp -o item.o

inventory: terminalPallete terminalPallete item
	$(CC) $(FLAGS) -c Inventory.cpp -o inventory.o

player: terminalPallete inventory item
	$(CC) $(FLAGS) -c Player.cpp -o player.o

Sistema: terminalPallete player Menu
	$(CC) $(FLAGS) -c Sistema.cpp -o sistema.o

farmer: Sistema itemsStorage terminalPallete inventory item player
	$(CC) $(FLAGS) -c Farmer.cpp -o farmer.o

Fisherman: Sistema itemsStorage terminalPallete inventory item player
	$(CC) $(FLAGS) -c Fisherman.cpp -o fisherman.o

Livestocker: Sistema itemsStorage terminalPallete inventory item player
	$(CC) $(FLAGS) -c Livestocker.cpp -o livestocker.o

Miner: Sistema itemsStorage terminalPallete inventory item player
	$(CC) $(FLAGS) -c Miner.cpp -o miner.o

Menu: terminalPallete player farmer Fisherman Livestocker Miner
	$(CC) $(FLAGS) -c Menu.cpp -o menu.o

main: clean terminalPallete storeManagerTemplate storeManager itemsStorage item inventory player farmer Fisherman Livestocker Miner Menu Sistema
	$(CC) $(FLAGS) main.cpp -o $(TARGET)

tests: clean terminalPallete storeManagerTemplate storeManager itemsStorage item inventory player farmer Fisherman Livestocker Miner Menu Sistema
	$(CC) $(FLAGS) test2.cpp -o tests.out
