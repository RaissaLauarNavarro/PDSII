#pragma once
#include "Player.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
class Sistema
{
public:
    Sistema();
    void criarPersonagem();
    void printText(const std::string texto);
    // // virtual ~StorageManager();
    // void write(const T &data);
    // void read(const T &data, int totalRegistros);
    // // virtual void findOne(char const *data);

private:
    Player _player;
};

// #include "StorageManager.tpp"