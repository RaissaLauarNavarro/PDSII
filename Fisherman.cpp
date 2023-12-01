#pragma once
#include <iostream>
#include <ctime>  
#include <cstdlib>
#include <algorithm>
#include <vector>

#include "Player.hpp"
#include "Fisherman.hpp"
#include "Item.hpp"
#include "Inventory.hpp"
#include "TerminalPalette.hpp"

void Fisherman::fish(Player* p)
{
    std::vector<Item> peixesPossiveis;
    peixesPossiveis.push_back(Item(100, "Peixe comum 1", 5.00, 0));
    peixesPossiveis.push_back(Item(101, "Peixe comum 2", 5.50, 0));
    peixesPossiveis.push_back(Item(102, "Peixe comum 3", 6.00, 0));
    peixesPossiveis.push_back(Item(103, "Peixe comum 4", 6.50, 0));
    peixesPossiveis.push_back(Item(104, "Peixe raro", 25.00, 0));
    peixesPossiveis.push_back(Item(105, "Peixe lendário", 50.00, 0));

    // Seed a função rand() com o tempo atual para obter números verdadeiramente aleatórios
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int indiceAleatorio = std::rand() % peixesPossiveis.size();

    p->getInventory()->insert(peixesPossiveis[indiceAleatorio].getId(), peixesPossiveis[indiceAleatorio]);
    p->addXp(peixesPossiveis[indiceAleatorio].getUnitaryPrice() *2.0);
    std::cout<<color::cyan << "Você pescou um " << peixesPossiveis[indiceAleatorio].getName() << "!" << color::off<<std::endl;
}


void Fisherman::cleanFish(Player* p)
{
    Inventory* playerInventory = p->getInventory();

    for (auto& entry : playerInventory->list()) {
        Item& item = entry.second.first;

        if ((item.getId() >= 100 && item.getId() <= 105) && !item.getStatus()) {
            double cleanedPrice = item.getUnitaryPrice() * 1.1;
            item.changePrice(cleanedPrice);
            item.changeStatus();
        }
    }
    p->addXp(15.0);
    std::cout << color::cyan << "Agora seus peixes valem mais!" << color::off << std::endl;
}
