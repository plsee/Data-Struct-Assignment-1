#ifndef _OUTFIT_H
#define _OUTFIT_H

#include "Item.h"
#include "Dweller.h"

class Outfit :public Item{

public:

	//Constructor
	Outfit(const string& name = "", const int& durability = 0, const int& special = 0);

	//Destructor
	virtual ~Outfit();


	const int getSPECIAL();

	virtual void receiveDamage(const int& damage);

private:

	const int kSPECIAL;



};

#endif