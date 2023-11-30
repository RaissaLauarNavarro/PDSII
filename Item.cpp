#include <string>

#include "Item.hpp"

Item::Item(int id, std::string name, float price, bool status){
    id = _id;
    name = _name;
    price = _price;
    status = _status;
}

std::string Item::getName(){
    return _name;
}

int Item::getId(){
    return _id;
}

float Item::getUnitaryPrice(){
    return _price;
}

 bool Item::getStatus(){
    return _status;
}
    
void Item::changePrice(float novo){
    _price = novo;
}

void Item::changeStatus(){
    _status != _status;
}