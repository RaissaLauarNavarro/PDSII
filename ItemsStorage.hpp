#pragma once
#include "StorageManager.hpp"

/// @brief Classe que gerencia o armazenamento de itens.
class ItemsStorage : public StorageManager {
public:
    /// @brief Construtor da classe ItemsStorage.
    /// @param file_path Caminho do arquivo de armazenamento.
    ItemsStorage(char const *file_path);

    /// @brief Destrutor da classe ItemsStorage.
    ~ItemsStorage();

    /// @brief Escreve um item no armazenamento.
    /// @param item O item a ser escrito.
    void write(const Item item) override;

    /// @brief Lê dados do armazenamento.
    /// @param data Os dados a serem lidos.
    void read(char const *data) override;

    /// @brief Encontra um item no armazenamento.
    /// @param data Os dados do item a ser encontrado.
    void findOne(char const *data) override;
};
