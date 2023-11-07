#include "inventory.hpp"
#include "Item.hpp"
#include <iostream>
#include <set>

Inventory::Inventory(unsigned capacity)
{
    _inventorySize = capacity;
}

bool Inventory::insert(int id,Item item)
{
    std::cout << "Item atual sendo inserido : "<< item.getName() << std::endl; 
    
    std::cout << id << std::endl;
    // auto find = _inventory.find(id);s
    if(_inventory.find(id) != _inventory.end())
    {
    
    std::cout << "entrou aq" << std::endl;
    std::cout << _inventory[id].second.second << std::endl;
    }
    else
    {
        std::cout << "entrou aq no else" << std::endl;
        _inventory.insert({id, std::make_pair(item,1)});
        // _inventory[id]= std::make_pair(item, 1);
    }

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

std::map<int, std::pair<Item, unsigned>> Inventory::list()
{
    // for(auto item : _inventory)
    // {
    //     std::cout << item << std::endl;
    //     // std::cout << item.second << std::endl;
    //     // std::cout << "--------------------" << std::endl;
    // }
    
    return _inventory;
}