#pragma once
#include <map>
#include <string>

class Item
{
public:
    //construtor da classe Item. Ele recebe os parametros definidos para a classe 
    //e é usado para inicializar os membros da classe quando um objeto da classe é criado;
    Item(int id, std::string name, double price, bool status);
    // Função usada para obter o nome do item;
    std::string getName();

    /// @brief retorna o preço de uma unidade daquele item
    /// @param name nome do item buscado
    double getUnitaryPrice();

    // Função para obter o ID do item;
    int getId();

    // Função para obter o status do item;
    bool getStatus();

    // Função para alterar o preço do item;
    void changePrice(double novo);

    // Função para alterar o status do item;
    void changeStatus();

// O modificador de acesso private, é usado para impedir e proteger os membros 
//de serem modificados ou acessados diretamente de fora da classe. (Encapsulamento);
private:
    int _id;
    std::string _name;
    double _price;
    bool _status;
};
