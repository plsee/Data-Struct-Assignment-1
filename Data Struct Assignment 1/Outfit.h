/****************************************************************************************/
/*!

\file Outfit.h
\Author Wong Keng Han Ashley
\par 155135S@mymail.nyp.edu.sg
\brief

Class to Difine an Outfit

*/
/****************************************************************************************/



#ifndef _OUTFIT_H
#define _OUTFIT_H

#include "Item.h"

/****************************************************************************************/
/*!

\brief

Class to Difine Outfits

*/
/****************************************************************************************/
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
