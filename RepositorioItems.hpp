#pragma once
#include <set>

/// @brief Classe que representa um repositório de itens.
class RepositorioItems {
public:
    /// @brief Construtor da classe RepositorioItems.
    RepositorioItems();

    /// @brief Insere um item no repositório.
    /// @param item O item a ser inserido.
    /// @return Verdadeiro se a inserção for bem-sucedida, falso caso contrário.
    bool insert(Item item);

    /// @brief Lista os itens presentes no repositório.
    /// @param items Conjunto onde os itens serão listados.
    /// @return Verdadeiro se a lista for bem-sucedida, falso caso contrário.
    bool list(std::set<Item> items);

private:
    std::set<Item> _repositorioItems; ///< Conjunto que armazena os itens no repositório.
};
