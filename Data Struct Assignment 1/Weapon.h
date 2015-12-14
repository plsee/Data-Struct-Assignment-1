/****************************************************************************************/
/*!

\file Weapon.h
\Author Wong Keng Han Ashley
\par 155135S@mymail.nyp.edu.sg
\brief

Class to Difine a Weapon

*/
/****************************************************************************************/


#ifndef _WEAPON_H
#define _WEAPON_H

#include "Item.h"

/****************************************************************************************/
/*!

\brief

Class to Difine Weapons

*/
/****************************************************************************************/
class Weapon :public Item{

public:

	//Constructor
	
	Weapon(const string& name = "", const int& durability = 0, const int& attackDmg = 1);

	//Destructor
	virtual ~Weapon();

	//Getters
	const int getAttackDmg();
	virtual void receiveDamage(const int& damage);

private:

	//Variables
	const int kAttackDmg;



};






#endif