#pragma once

#include <string>
#include "inventory.hpp"

class Player
{
public:
    Player();
    Player(const std::string name, const std::string classe);
    // // virtual ~StorageManager();
    // void write(const T &data);
    // void read(const T &data, int totalRegistros);
    // // virtual void findOne(char const *data);

private:
    std::string _name;
    std::string _classe;
    float _nivel;
    Inventory _inventario;
};

#include "StorageManager.tpp"