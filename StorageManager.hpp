#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

// Definição de uma classe template para gerenciar armazenamento em arquivo;
template <typename T>
class StorageManager
{
public:

    // Construtor que recebe o caminho do arquivo como parâmetro;
    StorageManager(char const *file_path);
    // virtual ~StorageManager();
    // Método para escrever os dados no arquivo;
    void write(const T &data);
    //// Método para ler dados do arquivo;
    void read(const T &data, int totalRegistros);
    // virtual void findOne(char const *data);

private:
    std::ifstream _file;
};
// Inclusão do arquivo de implementação (StorageManager.tpp);
#include "StorageManager.tpp"
