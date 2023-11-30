#pragma once
#include <iostream>
#include <ctime>  
#include <cstdlib>
#include <algorithm>
#include <vector>

#include "Miner.hpp"
#include "Item.hpp"
#include "inventory.hpp"

Inventory Miner::ore(Inventory inventario){
    std::vector<Item> mineriosPossiveis;
    mineriosPossiveis.push_back(Item(200, "Comum1", 5.00, 0));
    mineriosPossiveis.push_back(Item(201, "Comum2", 5.50, 0));
    mineriosPossiveis.push_back(Item(202, "Comum3", 6.00, 0));
    mineriosPossiveis.push_back(Item(203, "Comum4", 6.50, 0));
    mineriosPossiveis.push_back(Item(204, "Raro", 25.00, 0));
    mineriosPossiveis.push_back(Item(205, "Lemdário", 50.00, 0));

    // Seed a função rand() com o tempo atual para obter números verdadeiramente aleatórios
    // Assim, ocorre um sorteio do peixe a ser pescado
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int indiceAleatorio = std::rand() % mineriosPossiveis.size();
    inventario.insert(mineriosPossiveis[indiceAleatorio].getId(), mineriosPossiveis[indiceAleatorio]);

    return inventario;
}

Inventory Miner::refine(Inventory inventario) {
    std::map<int, std::pair<Item, unsigned> > itens = inventario.list();

    for (auto& entry : itens) {
        Item& item = entry.second.first;

        if ((item.getId() >= 200 || item.getId() <= 205) && !item.getStatus()) {
            //substituir itens
        }
    }
    return inventario;
}
