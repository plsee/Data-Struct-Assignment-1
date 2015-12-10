#ifndef _OUTFIT_H
#define _OUTFIT_H

#include "Item.h"

class Outfit :public Item{

public:

	//Constructor
	Outfit(const string& name, const int& durability, const int& special);

	//Destructor
	virtual ~Outfit();


	virtual const int getSPECIAL();

private:

	const int kSPECIAL;



};

#endif