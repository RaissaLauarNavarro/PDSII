#include "inventory.hpp"
#include "Item.hpp"
#include <iostream>
#include <set>

Inventory::Inventory(unsigned capacity)
{
    _inventorySize = capacity;
}

bool Inventory::insert(Item item)
{
    std::cout << "Item atual sendo inserido : "<< item.getName() << std::endl; 
    // std::string key = item.getName();
    // if (_inventory.find(key) != _inventory.end())
    // {
    //     // A key existe, atualize o valor
    //     _inventory[key] += 1;
    // }
    // else
    // {
    //     // A key não existe, insira com valor 1
    //     _inventory[key] = 1;
    // }
    return true;
}

std::map<Item, unsigned> Inventory::list()
{
    // for(auto item : _inventory)
    // {
    //     std::cout << item << std::endl;
    //     // std::cout << item.second << std::endl;
    //     // std::cout << "--------------------" << std::endl;
    // }
    
    return _inventory;
}