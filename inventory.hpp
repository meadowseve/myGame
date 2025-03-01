#pragma once
#include <vector>

class inventory
{
public:

void openInventory();
void addToInventory(item toAdd);


private:
std::vector inventoryVector<item>;

};

