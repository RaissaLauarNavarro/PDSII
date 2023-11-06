#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <iostream>
#include "doctest.h"

#include "inventory.hpp"
#include "Item.hpp"
#include "Item.cpp"
#include "inventory.cpp"

TEST_CASE("Inserção")
{
    Item item1("Item teste 1", 10.3);
    Item item2("Item teste 2", 20.3);
    Item item3("Item teste 3", 30.3);
    Inventory inventario(5);
    inventario.insert(item1);
    inventario.insert(item1);
    inventario.insert(item2);
    // inventario.insert("teste1");
    // inventario.insert("teste2");
    // inventario.insert("teste3");
    // 
    // CHECK_EQ(inventario.list().begin(), "teste1");
}

