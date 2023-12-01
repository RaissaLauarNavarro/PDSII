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