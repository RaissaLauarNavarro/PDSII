#include "Inventory.hpp"
#include "Item.hpp"
#include "TerminalPalette.hpp"
#include <iostream>
#include <set>

Inventory::Inventory(unsigned capacity)
{
    _inventorySize = capacity;
}

bool Inventory::hasItem(int id, unsigned quantidade)
{
    auto find = _inventory.find(id);
    return (find != _inventory.end() && find->second.second >= quantidade);
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

void Inventory::printInventory()
{
    std::cout<<color::yellows << "--------------- LISTAGEM DO INVENTARIO ---------------" <<color::off<< std::endl;
    for(auto stack : _inventory)
    {
        std::cout << "Item: " << stack.second.first.getName() << " | Qtd:" << stack.second.second << " | Preco total:"<< stack.second.first.getUnitaryPrice()* static_cast<double>(stack.second.second)<< std::endl;
    }
    std::cout << std::endl;
}

std::map<int, std::pair<Item, unsigned>> Inventory::list(){
     return _inventory;
}

void Inventory::updateItemPrice(int id, double novoPreco)
{
    auto it = _inventory.find(id);

    if (it != _inventory.end())
    {
        it->second.first.changePrice(novoPreco);
    }
}

void Inventory::updateItemStatus(int id)
{
    auto it = _inventory.find(id);

    if (it != _inventory.end())
    {
        it->second.first.changeStatus();
    }
}
