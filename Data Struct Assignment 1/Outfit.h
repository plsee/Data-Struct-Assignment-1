#ifndef _OUTFIT_H
#define _OUTFIT_H

#include "Item.h"

class Outfit : public Item{

public:

    //Constructor
    Outfit(const string& name, const int & durability, const int& special);

    //Destructor
    virtual ~Outfit();

    const int getSPECIAL();//Returns special

    virtual void receiveDamage(const int& damage);

private:

    const int kSPECIAL;



};













#endif
