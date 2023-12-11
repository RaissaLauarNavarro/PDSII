#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <vector>

#include "Player.hpp"
#include "Fisherman.hpp"
#include "Item.hpp"
#include "Inventory.hpp"
#include "Sistema.hpp"
#include "TerminalPalette.hpp"

void Fisherman::fish(Player *p, Sistema *sistema)
{
    std::vector<Item> peixesPossiveis;
    peixesPossiveis.push_back(Item(100, "Peixe comum 1", 5.00, 0));
    peixesPossiveis.push_back(Item(101, "Peixe comum 2", 5.50, 0));
    peixesPossiveis.push_back(Item(102, "Peixe comum 3", 6.00, 0));
    peixesPossiveis.push_back(Item(103, "Peixe comum 4", 6.50, 0));
    peixesPossiveis.push_back(Item(104, "Peixe raro", 25.00, 0));
    peixesPossiveis.push_back(Item(105, "Peixe lendario", 50.00, 0));

    // Seed a função rand() com o tempo atual para obter números verdadeiramente aleatórios
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int indiceAleatorio = std::rand() % peixesPossiveis.size();

    p->getInventory()->insert(peixesPossiveis[indiceAleatorio].getId(), peixesPossiveis[indiceAleatorio]);
    p->addXp(peixesPossiveis[indiceAleatorio].getUnitaryPrice() *2.0);
    std::cout << color::cyan;
    sistema->printText("Voce pescou um " + peixesPossiveis[indiceAleatorio].getName() + "!");
    std::cout << color::off;
}

void Fisherman::cleanFish(Player *p, Sistema *sistema)
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
        std::cout << color::cyan;
        sistema->printText("Agora seus peixes valem mais!");
        std::cout << color::off;
    }
    else
    {
        std::cout << color::red;
        sistema->printText("Ops, parece que todos os seus peixes ja estao limpos...");
        std::cout << color::off;
    }
}
