#ifndef _ITEM_H
#define _ITEM_H

#include "GameObject.h"

//Pure virtual class
class Item : public GameObject
{

public:

	//Methods

	virtual void receiveDamage(const int& damage) = 0; //Pure Virtual Function

	virtual const int getDurability();// Returns Durability_

	//Destructor
	virtual ~Item();
	
	//Constructor
	Item(const string& name = "", const int& durability = 0);



protected:


	//Variable

	int durability_; //Durability





private:
	




};


#endif