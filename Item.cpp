#include "Item.hpp"

Item::Item(std::string name, float price)
{
    _name = name;
    _price = price;
}

std::string Item::getName()
{
    return _name;
}