#pragma once
#include <map>

class Item
{
public:

    Item(int id, std::string name, float price);
    std::string getName();
    /// @brief retorna o preço de uma unidade daquele item
    /// @param name nome do item buscado
    float getUnitaryPrice();
    int getId();

    
    
private:
    int _id;
    std::string _name;
    float _price;
};