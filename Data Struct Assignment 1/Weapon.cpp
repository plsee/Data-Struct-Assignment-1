#include "Weapon.h"


Weapon::Weapon(const string& name, const int& durability, const int& attackDmg):
Item(name, durability),
kAttackDmg(attackDmg > 0 ? attackDmg : 0)
{





}


Weapon::~Weapon(){






}


const int Weapon::getAttackDmg(){

	return kAttackDmg;

}

void Weapon::receiveDamage(const int& damage){

	durability_ -= damage;


}