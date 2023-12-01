#pragma once
#include <map>
#include <string>

class Item
{
public:
    
    /// @brief Construtor da classe Item. Ele recebe os parametros definidos para a classe e é usado para inicializar os membros da classe quando um objeto da classe é criado;
    /// @param id O identificador único do item.
    /// @param name O nome do item.
    /// @param price O preço do item.
    /// @param status O status do item.
    Item(int id, std::string name, double price, bool status);
    /// @brief Função para obter o nome do item.
    /// @return O nome do item.
    std::string getName();

    /// @brief retorna o preço de uma unidade daquele item.
    /// @param name nome do item buscado.
    double getUnitaryPrice();

    /// @brief Função para obter o ID do item.
    /// @return O ID do item.
    int getId();

    /// @brief Função para obter o status do item.
    /// @return O status do item.
    bool getStatus();

    /// @brief Função para alterar o preço do item.
    /// @param novo O novo preço a ser atribuído ao item.
    void changePrice(double novo);

    /// @brief Função para alterar o status do item.
    void changeStatus();

private:
    int _id;
    std::string _name;
    double _price;
    bool _status;
};
