#pragma once
#include <map>
#include "Item.hpp"

/**
 * @file
 * @brief Contém a definição da classe Inventory.
 */

/**
 * @class Inventory
 * @brief Representa o inventário do jogador no jogo.
 */
class Inventory
{
public:
    /**
     * @brief Cria uma instância de inventário com tamanho máximo definido.
     * @param capacity Quantidade máxima de elementos no inventário.
     */
    Inventory(unsigned capacity);

    /**
     * @brief Insere um item no inventário do jogador.
     * @param id ID do item a ser inserido.
     * @param item Item a ser inserido no inventário.
     * @return true se o elemento foi inserido, false se não for.
     */
    bool insert(int id, Item item);

    /**
     * @brief Remove um item do inventário do jogador.
     * @param id ID do item a ser removido.
     * @param quantidade Quantidade do item a ser removida.
     * @return true se o elemento foi encontrado e removido, false se não for.
     */
    bool remove(int id, int quantidade);

    /**
     * @brief Lista todos os itens no inventário.
     * @return Um map com os itens e suas quantidades no inventário.
     */
    std::map<int, std::pair<Item, unsigned>> list();

private:
    unsigned _inventorySize; ///< Tamanho máximo do inventário.
    std::map<int, std::pair<Item, unsigned>> _inventory; ///< Mapa que armazena os itens no inventário.
};
