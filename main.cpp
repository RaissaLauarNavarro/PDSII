#include "Inventory.hpp"
#include "Inventory.cpp"
#include "Item.hpp"
#include "Item.cpp"
#include "Sistema.hpp"
#include "Sistema.cpp"
#include "Player.hpp"
#include "Player.cpp"
#include "Menu.hpp"
#include "Menu.cpp"
#include "Farmer.hpp"
#include "Farmer.cpp"
#include "Livestocker.hpp"
#include "Livestocker.cpp"
#include "Fisherman.hpp"
#include "Fisherman.cpp"
#include "Miner.hpp"
#include "Miner.cpp"
#include "ItemsStorage.cpp"
#include "ItemsStorage.hpp"
// #include "LojaDeItens.hpp"
// #include "LojaDeItens.cpp"

#include <string>
#include <stack>


int main() {
  Sistema sistema;
  sistema.criarPersonagem();
  return 0;
}
