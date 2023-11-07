#include "Item.hpp"

Item::Item(int id, std::string name, float price)
{
    _name = name;
    _price = price;
    _id = id;
}

std::string Item::getName()
{
    return _name;
}

int Item::getId()
{
    return _id;
}