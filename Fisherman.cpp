#pragma once
#include <iostream>
#include <ctime>  
#include <cstdlib>
#include <algorithm>
#include <vector>

#include "Fisherman.hpp"
#include "Item.hpp"
#include "inventory.hpp"

Inventory Fisherman::fish(Inventory inventario){
    std::vector<Item> peixesPossiveis;
    peixesPossiveis.push_back(Item(100, "Comum1", 5.00, 0));
    peixesPossiveis.push_back(Item(101, "Comum2", 5.50, 0));
    peixesPossiveis.push_back(Item(102, "Comum3", 6.00, 0));
    peixesPossiveis.push_back(Item(103, "Comum4", 6.50, 0));
    peixesPossiveis.push_back(Item(104, "Raro", 25.00, 0));
    peixesPossiveis.push_back(Item(105, "Lemdário", 50.00, 0));

    // Seed a função rand() com o tempo atual para obter números verdadeiramente aleatórios
    // Assim, ocorre um sorteio do peixe a ser pescado
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int indiceAleatorio = std::rand() % peixesPossiveis.size();
    inventario.insert(peixesPossiveis[indiceAleatorio].getId(), peixesPossiveis[indiceAleatorio]);

    return inventario;
}

Inventory Fisherman::cleanFish(Inventory inventario) {
    std::map<int, std::pair<Item, unsigned> > itens = inventario.list();

    for (auto& entry : itens) {
        Item& item = entry.second.first;

        if ((item.getId() >= 100 || item.getId() <= 105) && !item.getStatus()) {
            item.changePrice(item.getUnitaryPrice() * 0.1);
            item.changeStatus();
        }
    }
    return inventario;
}
