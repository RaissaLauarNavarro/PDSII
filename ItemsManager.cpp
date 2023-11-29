#include "ItemsStorage.hpp"
#include "item.hpp"
#include "StorageManager.hpp"

ItemsStorage::ItemsStorage(char const *file_path) : StorageManager(file_path){};
// ItemsStorage::~ItemsStorage()
// {
//     ;
// }
void ItemsStorage::write(const Item item)
{
}