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
#include "StorageManager.hpp"
#include "Farmer.hpp"
#include "Farmer.cpp"

#include <string>
#include <stack>

int main() {
  Sistema sistema;
  sistema.criarPersonagem();
  return 0;
}
