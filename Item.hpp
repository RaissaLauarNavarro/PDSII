#pragma once
#include <map>
#include <string>

/**
 * @file
 * @brief Contém a definição da classe Item.
 */

/**
 * @class Item
 * @brief Representa um item no sistema.
 */
class Item {
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
     * @brief Obtém o nome do item.
     * @return Nome do item.
     */
    std::string getName();

    /**
     * @brief Obtém o preço unitário do item.
     * @return Preço unitário do item.
     */
    double getUnitaryPrice();

    /**
     * @brief Obtém o identificador único do item.
     * @return Identificador único do item.
     */
    int getId();

    /**
     * @brief Obtém o status do item.
     * @return Status do item.
     */
    bool getStatus();

    /**
     * @brief Altera o preço do item.
     * @param novo Novo preço do item.
     */
    void changePrice(double novo);

    /**
     * @brief Altera o status do item.
     */
    void changeStatus();

private:
    int _id; ///< Identificador único do item.
    std::string _name; ///< Nome do item.
    double _price; ///< Preço do item.
    bool _status; ///< Status do item.
};
