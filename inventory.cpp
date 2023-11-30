#include "Inventory.hpp"
#include "Item.hpp"
#include "TerminalPalette.hpp"
#include <iostream>
#include <set>

Inventory::Inventory(unsigned capacity){
    _inventorySize = capacity;
}

bool Inventory::insert(int id,Item item){
    std::cout << "Item atual sendo inserido : "<< item.getName() << std::endl; 
    
    auto find = _inventory.find(id);
    if(_inventory.find(id) != _inventory.end())
        find->second.second +=1;
    else
    {
        _inventory.insert({id, std::make_pair(item,1)});
        find = _inventory.find(id);
    }
    
    std::cout << "Qtd do item atual:" << find->second.second << std::endl;

    return true;
}

bool Inventory::remove(int id, int quantidade){
    auto find = _inventory.find(id);
    if (find != _inventory.end()) {
        if (find->second.second >= quantidade) {
            find->second.second -= quantidade;
        }else{
            return false;
        }
    }else{
        return false;
    }
    return true;
}

std::map<int, std::pair<Item, unsigned>> Inventory::list(){
    std::cout<<color::yellows << "--------------- LISTAGEM DO INVENTÁRIO ---------------" <<color::off<< std::endl;
    for(auto stack : _inventory)
    {
        std::cout << "Item: " << stack.second.first.getName() << " | Qtd:" << stack.second.second << " | Preço total:"<< stack.second.first.getUnitaryPrice()* stack.second.second<< std::endl;
    }
    return _inventory;
}