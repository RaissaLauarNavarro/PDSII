#pragma once
#include "StorageManager.hpp"
#include "ItemsStorage.hpp"
#include "Item.hpp"
/**
 * @file
 * @brief Contém a definição da classe ItemsStorage, uma subclasse de StorageManager.
 */

/**
 * @class ItemsStorage
 * @brief Gerencia o armazenamento de itens.
 */
class ItemsStorage : public StorageManager<Item>
{
public:
    /**
     * @brief Construtor da classe ItemsStorage.
     * @param file_path Caminho do arquivo de armazenamento.
     */
    ItemsStorage(char const *file_path);

    /**
     * @brief Destrutor da classe ItemsStorage.
     */
    ~ItemsStorage();

    /**
     * @brief Escreve um item no armazenamento.
     * @param item O item a ser escrito.
     */
    void write(const Item &item) override;

    /**
     * @brief Lê dados do armazenamento.
     * @param data Os dados a serem lidos.
     */
    void read(int totalRegistros) override;

    /**
     * @brief Encontra um item no armazenamento.
     * @param tipo Tipo de item ramdômico que deve ser buscado.
     * 1- Peixes
     * 2- Minérios
     */
    Item findRandom(const int tipo);

    Item findByName(const std::string name);
};
