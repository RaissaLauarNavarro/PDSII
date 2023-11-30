#pragma once
#include <map>
#include <string>

class Item{
public:

    Item(int id, std::string name, float price, bool status);
    std::string getName();

    /// @brief obtem o preço do item
    /// @return retorna o preço de uma unidade daquele item em float
    float getUnitaryPrice();

    /// @return retorna o preço de uma unidade daquele item em int
    int getId();

    /// @return retorna o preço de uma unidade daquele item em bool
    bool getStatus();

    /// @brief altera o preço do item
    /// @param novo novo preço a ser alterado
    void changePrice(float novo);

    /// @brief altera o status do item
    void changeStatus(); 
      
private:
    int _id;
    std::string _name;
    float _price;
    bool _status;
};