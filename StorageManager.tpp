#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

template <typename T>
StorageManager<T>::StorageManager(char const *file_path)
{
    _file.open(file_path);
}
// StorageManager<T>::StorageManager(char const *file_path) : _file(fopen(file_path, "w")){};
// StorageManager::~StorageManager()
// {
//     fclose(_file);
// }

template <typename T>
void StorageManager<T>::write(const T &data)
{
    std::cout << "Tipo de dado: " << typeid(T).name() << std::endl;
    // if (_file.is_open())
    //     std::cout << "arquivo tá aberto" << std::endl;
    // else
    //     std::cout << "arquivo não tá aberto" << std::endl;
    std::string linha;
    while (!_file.eof())
    {
        std::getline(_file, linha);
        std::cout << "Linha:" << linha << std::endl;
    }
    // std::cout << "Tipo de dado: " << typeid(T) << std::endl;
    // fputs(data, _file);
}
template <typename T>
void StorageManager<T>::read(int totalRegistros)
{
    // std::cout << "Tipo de dado: " << typeid(T).name() << std::endl;
    // std::cout << "Tipo de dado: " << typeid(T) << std::endl;
    // std::cout << data << std::endl;
    // fputs(data, _file);
}
// template <typename T>
// T StorageManager<T>::findRandom(const std::string classe)
// {
//     unsigned seed = time(0);
//     std::string linhaBuscada;
//     srand(seed);
//     int id = rand() % 5;
//     _file.seekg(0);
//     for (int i = 0; i < id; i++)
//     {
//         std::string lixo;
//         std::getline(_file, lixo);
//     }
//     std::getline(_file, linhaBuscada);
//     std::cout << "Linha buscada : " << id << std::endl;
//     std::cout << linhaBuscada << std::endl;
//     return linhaBuscada;
// }