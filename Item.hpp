#pragma once
#include <map>
#include <string>

class Item
{
public:
    Item(int id, std::string name, double price, bool status);
    std::string getName();

    /// @brief retorna o preço de uma unidade daquele item
    /// @param name nome do item buscado
    double getUnitaryPrice();

    int getId();

    bool getStatus();

    void changePrice(double novo);

    void changeStatus();

private:
    int _id;
    std::string _name;
    double _price;
    bool _status;
};