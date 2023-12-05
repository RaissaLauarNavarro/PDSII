#pragma once
#include <map>
#include "Item.hpp"

/**
 * @file
 * @brief Contém a definição da classe Inventory.
 */

/**
 * @class Inventory
 * @brief Representa o inventário de um jogador.
 */
class Inventory
{
public:
    /**
     * @brief Construtor da classe Inventory.
     * @param capacity Quantidade máxima de elementos no inventário.
     */
    Inventory(unsigned capacity);

    /**
     * @brief Verifica se o inventário possui uma quantidade específica de um item.
     * @param id Identificador único do item.
     * @param quantidade Quantidade desejada do item.
     * @return Verdadeiro se o inventário possuir a quantidade desejada do item, falso caso contrário.
     */
    bool hasItem(int id, unsigned quantidade);

    /**
     * @brief Insere um item no inventário do jogador.
     * @param id Identificador único do item.
     * @param item Item a ser inserido no inventário.
     * @return Verdadeiro se o elemento foi inserido, falso se não foi.
     */
    bool insert(int id, Item item);

    /**
     * @brief Remove uma quantidade específica de um item do inventário.
     * @param id Identificador único do item.
     * @param quantidade Quantidade do item a ser removida.
     * @return Verdadeiro se o elemento foi removido, falso se não foi encontrado.
     */
    bool remove(int id, unsigned quantidade);

    /**
     * @brief Imprime todos os itens do inventário.
     */
    void printInventory();

    /**
     * @brief Lista todos os itens do inventário com suas quantidades.
     * @return Mapa com os itens e suas quantidades.
     */
    std::map<int, std::pair<Item, unsigned>> list();

    /**
     * @brief Atualiza o preço de um item no inventário.
     * @param id Identificador único do item.
     * @param novoPreco Novo preço a ser atribuído ao item.
     */
    void updateItemPrice(int id, double novoPreco);

    /**
     * @brief Atualiza o status de um item no inventário.
     * @param id Identificador único do item.
     */
    void updateItemStatus(int id);

private:
    unsigned _inventorySize; ///< Tamanho máximo do inventário.
    std::map<int, std::pair<Item, unsigned>> _inventory; ///< Mapa que armazena os itens no inventário.
};
