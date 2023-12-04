#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <vector>

#include "Player.hpp"
#include "ItemsStorage.hpp"
#include "Fisherman.hpp"
#include "Item.hpp"
#include "Inventory.hpp"
#include "TerminalPalette.hpp"

void Fisherman::fish(Player *p, ItemsStorage *storage)
{
    Item peixe = storage->findRandom(1);
    p->getInventory()->insert(peixe.getId(), peixe);
    p->addXp(peixe.getUnitaryPrice() * 2.0);
    std::cout << color::cyan << "Voce pescou um " << peixe.getName() << "!" << color::off << std::endl;
}

void Fisherman::cleanFish(Player *p)
{
    Inventory *playerInventory = p->getInventory();
    bool limpou = false;
    for (auto &entry : playerInventory->list())
    {
        Item &item = entry.second.first;

        if ((item.getId() >= 5 && item.getId() <= 11) && !item.getStatus())
        {
            double cleanedPrice = item.getUnitaryPrice() * 1.1;
            playerInventory->updateItemPrice(item.getId(), cleanedPrice);
            playerInventory->updateItemStatus(item.getId());
            limpou = true;
        }
    }
    if (limpou)
    {
        p->addXp(15.0);
        std::cout << color::cyan << "Agora seus peixes valem mais!" << color::off << std::endl;
    }
    else
    {
        std::cout << color::red << "Ops, parece que todos os seus peixes ja estao limpos..." << color::off << std::endl;
    }
}
