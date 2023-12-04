#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

/**
 * @file
 * @brief Contém a definição da classe template StorageManager.
 */

/**
 * @brief Classe modelo para gerenciamento de armazenamento.
 * @tparam T Tipo de dados a ser armazenado.
 */
template <typename T>
class StorageManager
{
public:
    /**
     * @brief Construtor da classe StorageManager.
     * @param file_path Caminho do arquivo de armazenamento.
     */
    StorageManager(char const *file_path);

    // Métodos comentados para remoção temporária
    // virtual ~StorageManager();

    /**
     * @brief Escreve dados no arquivo de armazenamento.
     * @param data Os dados a serem escritos.
     */
    virtual void write(const T &data);

    /**
     * @brief Lê dados do arquivo de armazenamento.
     * @param data Os dados a serem lidos.
     * @param totalRegistros O número total de registros a serem lidos.
     */
    virtual void read(int totalRegistros);

    /**
     * @brief Busca um registro aleatoriamente no arquivo.
     * @return registro escolhido.
     */
    // virtual T findRandom(const std::string classe);
    // Métodos comentados para remoção temporária
    // virtual void findOne(char const *data);

protected:
    std::ifstream _file; ///< Fluxo de arquivo para leitura.
};

#include "StorageManager.tpp"
