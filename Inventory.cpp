#pragma once
#include "Inventory.hpp"
#include "Item.hpp"
#include "TerminalPalette.hpp"
#include <iostream>
#include <set>

Inventory::Inventory(unsigned capacity)
{
    _inventorySize = capacity;
}

bool Inventory::insert(int id,Item item)
{
    // std::cout <<color::grayf << "Item atual sendo inserido : " << color::off << std::endl;
    
    auto find = _inventory.find(id);
    if(_inventory.find(id) != _inventory.end())
        find->second.second +=1;
    else
    {
        _inventory.insert({id, std::make_pair(item,1)});
        find = _inventory.find(id);
    }
    
    // std::cout <<color::grayf << "Qtd do item atual:" << find->second.second << color::off << std::endl;

    return true;
}

bool Inventory::remove(int id, unsigned quantidade)
{
    auto find = _inventory.find(id);
    if (find != _inventory.end()) {
        if (find->second.second >= quantidade) {
            find->second.second -= quantidade;
        }else{
            return false;
        }
    }
    return true;
}

std::map<int, std::pair<Item, unsigned>> Inventory::list()
{
    std::cout<<color::yellows << "--------------- LISTAGEM DO INVENTARIO ---------------" <<color::off<< std::endl;
    for(auto stack : _inventory)
    {
        std::cout << "Item: " << stack.second.first.getName() << " | Qtd:" << stack.second.second << " | Preco total:"<< stack.second.first.getUnitaryPrice()* stack.second.second<< std::endl;
    }
    std::cout << std::endl;
    return _inventory;
}
