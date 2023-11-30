#pragma once
#include <map>
#include <string>

class Item{
public:

    Item(int id, std::string name, float price, bool status);
    std::string getName();

    /// @brief retorna o preço de uma unidade daquele item
    /// @param name nome do item buscado
    float getUnitaryPrice();

    int getId();

    bool getStatus();

    void changePrice(float novo);

    void changeStatus(); 
      
private:
    int _id;
    std::string _name;
    float _price;
    bool _status;
};