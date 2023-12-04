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

void Miner::ore(Player *p, ItemsStorage *storage)
{
    Item minerio = storage->findRandom(2);
    p->getInventory()->insert(minerio.getId(), minerio);
    p->addXp(minerio.getUnitaryPrice() * 2.0);
    std::cout << color::cyan << "Voce mineirou 1 " << minerio.getName() << "!" << color::off << std::endl;
}

void Miner::refine(Player *p)
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
        std::cout << color::cyan << "Agora seus minerios valem mais!" << color::off << std::endl;
    }
    else
        std::cout << color::red << "Ops, parece que seus minerios ja estao refinados..." << color::off << std::endl;
}