#ifndef _WEAPON_H
#define _WEAPON_H

#include "Item.h"
#include "GameObject.h"

class Weapon :public Item{

public:

	//Constructor
	Weapon(const string& name, const int& durability, const int& attackDmg);

	//Destructor
	virtual ~Weapon();

	virtual const int getAttackDmg();


private:

	const int kAttackDmg;



};






#endif