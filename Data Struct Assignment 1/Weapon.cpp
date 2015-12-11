#include "Weapon.h"


Weapon::Weapon(const string& name, const int& durability, const int& attackDmg):
Item::Item(name, durability),
kAttackDmg(attackDmg)
{




}


Weapon::~Weapon(){





}
