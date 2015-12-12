#include "Outfit.h"


Outfit::Outfit(const string& name, const int& durability, const int& special):
Item(name, durability),
kSPECIAL(special)
{

	

}


Outfit::~Outfit(){


	

}

const int Outfit::getSPECIAL(){


    return kSPECIAL;


}

void Outfit::receiveDamage(const int& damage){

	durability_ -= damage;


}