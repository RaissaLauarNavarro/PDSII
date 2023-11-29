#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <iostream>
#include "doctest.h"

#include "inventory.hpp"
#include "Item.hpp"
#include "Item.cpp"
#include "inventory.cpp"
#include "Sistema.hpp"
#include "StorageManager.hpp"

// TEST_CASE("Inserção")
// {
//     Item item2(1,"Item teste 2", 20.3);
//     Item item3(2,"Item teste 3", 30.3);
//     Inventory inventario(5);
//     Inventory inventario(5);
//     inventario.insert(item1.getId(),item1);
//     inventario.insert(item1.getId(),item1);
//     inventario.insert(item2.getId(),item2);
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
    Sistema sistema();
}