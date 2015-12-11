#ifndef _ITEM_H
#define _ITEM_H

#include "GameObject.h"

//Pure virtual class
class Item : public GameObject
{

public:

	
	virtual void receiveDamage(const int& damage) = 0;

	virtual const int getDurability() = 0;

	//Destructor
	virtual ~Item();
	
	//Constructor
	Item(const string& name, const int& durability) : durability_(durability), GameObject::GameObject(name){};



protected:


	int durability_;





private:
	




};


#endif