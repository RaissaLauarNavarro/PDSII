#pragma once
#include "StorageManager.hpp"
class ItemsStorage : public StorageManager
{
public:
    ItemsStorage(char const *file_path);
    ~ItemsStorage();
    void write(const Item item) override;
    void read(char const *data) override;
    void findOne(char const *data) override;
};