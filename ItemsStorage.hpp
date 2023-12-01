#pragma once
#include "StorageManager.hpp"
class ItemsStorage : public StorageManager
{
public:
    // Construtor responsável por inicializar a classe ItemsStorage com base no caminho do arquivo passado (Ponteiro como parametro).
    ItemsStorage(char const *file_path);

    // Destrutor da classe usado para liberar recursos alocados na memória;
    ~ItemsStorage();

    // Método para escrever um item no armazenamento (substitui o método virtual da classe base);
    void write(const Item item) override;

    //Método para ler dados do armazenamento;
    void read(char const *data) override;

    //Método para encontrar um item específico no armazenamento;
    void findOne(char const *data) override;
};
