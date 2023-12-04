
#include <ctime>
// #include "StorageManager.hpp"
#include <random>

ItemsStorage::ItemsStorage(char const *file_path) : StorageManager(file_path){};
ItemsStorage::~ItemsStorage(){};
// {
//     ;
// }
void ItemsStorage::write(const Item &data)
{
}

void ItemsStorage::read(int totalRegistros)
{
}
Item ItemsStorage::findByName(std::string name)
{
    _file.seekg(0, _file.beg);
    std::string linha;
    while (!_file.eof())
    {
        std::getline(_file, linha);
        int id = std::stoi(linha);
        std::getline(_file, linha);
        if (linha == name)
        {
            std::getline(_file, linha);
            double price = std::stod(linha);
            Item item(id, name, price, false);
            return item;
        }
        else
        {
            std::getline(_file, linha);
            std::getline(_file, linha);
        }
    }
    throw std::runtime_error("Item inexistente");
}

Item ItemsStorage::findRandom(const int teste)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::discrete_distribution<> distribuicao{
        25, // 25% de chance para 0
        25, // 25% de chance para 1
        20, // 20% de chance para 2
        15, // 15% de chance para 3
        10, // 10% de chance para 4
        5   // 5% de chance para 5
    };
    int id = distribuicao(gen) + teste * 5;

    _file.seekg(0, _file.beg);
    std::string lixo;
    for (int i = 0; i < id * 4; i++)
    {
        std::getline(_file, lixo);
    }
    std::string nome;
    double price;
    std::getline(_file, nome);
    // std::cout << "Id do item:" << nome << std::endl;
    std::getline(_file, nome);
    // std::cout << "Nome do item:" << nome << std::endl;
    std::string priceLine;
    std::getline(_file, priceLine);
    price = std::stod(priceLine);
    // std::cout << "Preço do item:" << price << std::endl;
    Item itemBuscado(id, nome, price, false);

    return itemBuscado;
}
