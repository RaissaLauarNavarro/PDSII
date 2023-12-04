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

item: itemsStorage
	$(CC) $(FLAGS) -c Item.cpp -o item.o

itemsManager: storeManager item
	$(CC) $(FLAGS) -c ItemsManager.cpp ItemsStorage.hpp -o itemsManager.o

inventory: terminalPallete terminalPallete item
	$(CC) $(FLAGS) -c Inventory.cpp -o inventory.o

player: terminalPallete inventory item
	$(CC) $(FLAGS) -c Player.cpp -o player.o

farmer: terminalPallete inventory item player
	$(CC) $(FLAGS) -c Farmer.cpp -o farmer.o

Fisherman: terminalPallete inventory item player
	$(CC) $(FLAGS) -c Fisherman.cpp -o fisherman.o

Livestocker: terminalPallete inventory item player
	$(CC) $(FLAGS) -c Livestocker.cpp -o livestocker.o
Miner: terminalPallete inventory item player
	$(CC) $(FLAGS) -c Miner.cpp -o miner.o

Menu: terminalPallete player farmer Fisherman Livestocker Miner
	$(CC) $(FLAGS) -c Menu.cpp -o menu.o

Sistema: terminalPallete player Menu
	$(CC) $(FLAGS) -c Sistema.cpp -o sistema.o

main: clean terminalPallete storeManagerTemplate storeManager itemsStorage item itemsManager inventory player farmer Fisherman Livestocker Miner Menu Sistema
	$(CC) $(FLAGS) tPalette.o storeManager.o item.o itemsManager.o inventory.o player.o farmer.o Fisherman.o Livestocker.o Miner.o Menu.o Sistema.o main.cpp -o $(TARGET)

tests: clean terminalPallete storeManagerTemplate storeManager itemsStorage item itemsManager inventory player farmer Fisherman Livestocker Miner Menu Sistema
	$(CC) $(FLAGS) tPalette.o storeManager.o item.o itemsManager.o inventory.o player.o farmer.o Fisherman.o Livestocker.o Miner.o Menu.o Sistema.o tests2.cpp -o tests.out

