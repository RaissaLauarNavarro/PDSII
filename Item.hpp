#pragma once
#include <map>

class Item
{
public:

    Item(std::string name, float price);
    std::string getName();
    /// @brief retorna o preço de uma unidade daquele item
    /// @param name nome do item buscado
    float unitaryPrice(std::string nome);

    
    
private:
    std::string _name;
    float _price;
};