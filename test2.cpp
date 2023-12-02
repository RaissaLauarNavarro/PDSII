#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <iostream>
#include "doctest.h"

#include "Inventory.hpp"
#include "Inventory.cpp"
#include "Item.hpp"
#include "Item.cpp"
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

TEST_CASE("Mostrar Menu"){
    Player p;
    Menu menu;
    menu.listarAtividades(&p);
}

TEST_CASE("Obter trigo e cenoura"){
    Player p;
    Farmer farmer;
    // Fisherman fisherman;
    // Miner miner;
    // Livestocker livestocker;

    CHECK_FALSE(p.getInventory()->hasItem(1, 1));
    p.getInventory()->insert(1, Item(1, "Semente", 0.50, 0));
    p.getInventory()->insert(1, Item(1, "Semente", 0.50, 0));
    p.getInventory()->insert(1, Item(1, "Semente", 0.50, 0));
    CHECK_FALSE(p.getInventory()->hasItem(2, 2));
    CHECK_FALSE(p.getInventory()->hasItem(3, 1));
    farmer.getWheat(1, &p);
    farmer.getCarrot(2, &p);
    CHECK(p.getInventory()->hasItem(2, 1));
    CHECK(p.getInventory()->hasItem(3, 2));
}


TEST_CASE("Limpar Peixes"){
    Player p;
    Fisherman fisherman;
    p.getInventory()->insert(105, Item(105, "Peixe lendario", 50.00, 0));
    p.getInventory()->insert(105, Item(105, "Peixe lendario", 50.00, 0));
    fisherman.cleanFish(&p);
    p.getInventory()->list();
}
