#pragma once
#include <string>

#include "Item.hpp"

Item::Item(int id, std::string name, double price, bool status)
{
    _id = id;
    _name = name;
    _price = price;
    _status = status;
}

std::string Item::getName()
{
    return _name;
}

int Item::getId()
{
    return _id;
}

double Item::getUnitaryPrice()
{
    return _price;
}

bool Item::getStatus()
{
    return _status;
}

void Item::changePrice(double novo)
{
    _price = novo;
}

void Item::changeStatus()
{
    _status != _status;
}