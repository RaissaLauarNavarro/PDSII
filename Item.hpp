#pragma once
#include <map>
#include <string>

/**
 * @file
 * @brief Contém a definição da classe Item.
 */

/**
 * @class Item
 * @brief Representa um item no jogo.
 */
class Item
{
public:
    /**
     * @brief Construtor da classe Item.
     * @param id Identificador único do item.
     * @param name Nome do item.
     * @param price Preço do item.
     * @param status Status do item.
     */
    Item(int id, std::string name, double price, bool status);

    /**
     * @brief Função para obter o nome do item.
     * @return O nome do item.
     */
    std::string getName();

    /**
     *
