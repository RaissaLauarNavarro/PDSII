#pragma once

#include <string>
#include "Inventory.hpp"

class Player
{
public:
    Player();
    Player(const std::string name);
    void functeste();
    void printInventory();
    void addXp(float newXp);
    float getLevel();
    Inventory* getInventory();
    // // virtual ~StorageManager();
    // void write(const T &data);
    // void read(const T &data, int totalRegistros);
    // // virtual void findOne(char const *data);

private:
    std::string _name;
    float _level;
    float _xp;
    Inventory _inventario;
};

// #include "StorageManager.tpp"