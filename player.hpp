#include "weapon.hpp"
#include "inventory.hpp"


class player
{

public:

bool equip(item eqItem);


private:

weapon equippedWeapon;
inventory playerInventory;
bool inventoryOpen;

};
