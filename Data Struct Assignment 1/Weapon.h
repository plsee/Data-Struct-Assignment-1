#ifndef _WEAPON_H
#define _WEAPON_H

#include "Item.h"

class Weapon :public Item{

public:

	//Constructor
	
	Weapon(const string& name = "", const int& durability = 0, const int& attackDmg = 1);

	//Destructor
	virtual ~Weapon();

	//Getters
	virtual const int getAttackDmg();
	virtual void receiveDamage(const int& damage);

private:

	//Variables
	const int kAttackDmg;



};






#endif