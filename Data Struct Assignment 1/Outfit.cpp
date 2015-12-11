#include "Outfit.h"


Outfit::Outfit(const string& name, const int& durability, const int& special):
Item::Item(name, durability),
kSPECIAL(special)
{




}


Outfit::~Outfit(){



}
