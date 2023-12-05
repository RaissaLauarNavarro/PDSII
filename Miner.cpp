#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <vector>

#include "Player.hpp"
#include "Miner.hpp"
#include "Item.hpp"
#include "Inventory.hpp"
#include "ItemsStorage.hpp"
#include "TerminalPalette.hpp"

void Miner::ore(Player *p, ItemsStorage *storage, Sistema *sistema)
{
    Item minerio = storage->findRandom(2);
    p->getInventory()->insert(minerio.getId(), minerio);
    p->addXp(minerio.getUnitaryPrice() * 2.0);
    std::cout << color::cyan;
    sistema->printText("Voce mineirou 1 " + minerio.getName() + "!");
    std::cout << color::off;
}

void Miner::refine(Player *p, Sistema *sistema)
{
    Inventory *playerInventory = p->getInventory();
    bool refinou = false;
    for (auto &entry : playerInventory->list())
    {
        Item &item = entry.second.first;

        if ((item.getId() >= 11 || item.getId() <= 16) && !item.getStatus())
        {
            double refinedPrice = item.getUnitaryPrice() * 1.1;
            playerInventory->updateItemPrice(item.getId(), refinedPrice);
            playerInventory->updateItemStatus(item.getId());
            refinou = true;
        }
    }
    if (refinou)
    {

        p->addXp(15.0);
        std::cout << color::cyan;
        sistema->printText("Agora seus minerios valem mais!");
        std::cout << color::off;
    }
    else
        std::cout << color::red;
    sistema->printText("Ops, parece que seus minerios ja estao refinados...");
    std::cout << color::off;
}