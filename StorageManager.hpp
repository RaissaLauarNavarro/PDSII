#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
template <typename T>
class StorageManager
{
public:
    StorageManager(char const *file_path);
    // virtual ~StorageManager();
    void write(const T &data);
    void read(const T &data, int totalRegistros);
    // virtual void findOne(char const *data);

private:
    std::ifstream _file;
};

#include "StorageManager.tpp"