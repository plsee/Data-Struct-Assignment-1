#include "Weapon.h"


Weapon::Weapon(const string& name, const int& durability, const int& attackDmg):
Item(name, durability),
kAttackDmg(attackDmg > 0 ? attackDmg : 0)
{





}


Weapon::~Weapon(){






}


const int Weapon::getAttackDmg(){

    if (durability_ > 0){
        return kAttackDmg;
    }
    else{
        return 1;
    }

}

void Weapon::receiveDamage(const int& damage){

	durability_ -= damage / 2;

}