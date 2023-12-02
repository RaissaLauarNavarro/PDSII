#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <iostream>
#include "doctest.h"

#include "inventory.hpp"
#include "inventory.cpp"
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
#include "LojaDeItens.hpp"
#include "LojaDeItens.cpp"

// TEST_CASE("Inserção")
// {
//     Item item1(0, "Item teste 1", 10.3, true);
//     Item item2(1, "Item teste 2", 20.3, true);
//     Item item3(2, "Item teste 3", 30.3, false);
//     Inventory inventario(5);
//     // Inventory inventario(5);
//     inventario.insert(item1.getId(), item1);
//     inventario.insert(item1.getId(), item1);
//     inventario.insert(item2.getId(), item2);
//     inventario.list();
//     // inventario.insert(item1);
//     // inventario.insert(item2);
//     // inventario.insert("teste1");
//     // inventario.insert("teste2");
//     // inventario.insert("teste3");
//     //
//     // CHECK_EQ(inventario.list().begin(), "teste1");
// }

// TEST_CASE("Template storage")
// {
//     StorageManager<Item> storage("./filetest.txt");
//     Item item1(0, "Item teste 1", 10.3);

//     storage.write(item1);
//     StorageManager<Inventory> storage2("./filetest.txt");
//     Inventory inventario(5);
//     storage2.read(inventario, 3);
// }

TEST_CASE("Sistema + Menu")
{
    Sistema sistema = Sistema();
    // sistema.criarPersonagem();
    sistema.printText("TEXTO TESTE TEXTO TESTE");
}
