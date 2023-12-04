#pragma once
#include "StorageManager.hpp"

/**
 * @file
 * @brief Contém a definição da classe ItemsStorage, uma subclasse de StorageManager.
 */

/**
 * @class ItemsStorage
 * @brief Gerencia o armazenamento de itens, herda de StorageManager.
 */
class ItemsStorage : public StorageManager
{
public:
    /**
     * @brief Construtor responsável por inicializar a classe ItemsStorage com base no caminho do arquivo passado.
     * @param file_path O caminho do arquivo a ser utilizado para armazenamento.
     */
    ItemsStorage(char const *file_path);

    /**
     * @brief Destrutor da classe usado para liberar recursos alocados na memória.
     */
    ~ItemsStorage();

    /**
     * @brief Método para escrever um item no armazenamento (substitui o método virtual da classe base).
     * @param item O item a ser escrito no armazenamento.
     */
    void write(const Item item) override;

    /**
     * @brief Método para ler dados do armazenamento.
     * @param data Os dados a serem lidos do armazenamento.
     */
    void read(char const *data) override;

    /**
     * @brief Método para encontrar um item específico no armazenamento.
     * @param data Os dados a serem utilizados para encontrar o item.
     */
    void findOne(char const *data) override;
};
