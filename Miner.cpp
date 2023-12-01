#pragma once
#include <iostream>
#include <ctime>  
#include <cstdlib>
#include <algorithm>
#include <vector>

#include "Player.hpp"
#include "Miner.hpp"
#include "Item.hpp"
#include "Inventory.hpp"
#include "TerminalPalette.hpp"

void Miner::ore(Player* p)
{
    std::vector<Item> mineriosPossiveis;
    mineriosPossiveis.push_back(Item(200, "Pedra", 1.00, 0));
    mineriosPossiveis.push_back(Item(201, "Carvao", 2.00, 0));
    mineriosPossiveis.push_back(Item(202, "Ferro", 5.00, 0));
    mineriosPossiveis.push_back(Item(203, "Ouro", 15.00, 0));
    mineriosPossiveis.push_back(Item(204, "Esmeralda", 20.00, 0));
    mineriosPossiveis.push_back(Item(205, "Diamante", 25.00, 0));

    // Seed a função rand() com o tempo atual para obter números verdadeiramente aleatórios
    // Assim, ocorre um sorteio do peixe a ser pescado
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int indiceAleatorio = std::rand() % mineriosPossiveis.size();

    p->getInventory()->insert(mineriosPossiveis[indiceAleatorio].getId(), mineriosPossiveis[indiceAleatorio]);
    p->addXp(mineriosPossiveis[indiceAleatorio].getUnitaryPrice() *2.0);
    std::cout<<color::cyan << "Você mineirou 1 " << mineriosPossiveis[indiceAleatorio].getName() << "!" << color::off<<std::endl;
}

void Miner::refine(Player* p) 
{
    std::map<int, std::pair<Item, unsigned> > itens = p->getInventory()->list();

    for (auto& entry : itens) {
        Item& item = entry.second.first;

        if ((item.getId() >= 200 || item.getId() <= 205) && !item.getStatus()) {
            //substituir itens
        }
    }
     std::cout<<color::cyan << "Agora seus minérios valem mais!" << color::off<<std::endl;
}
