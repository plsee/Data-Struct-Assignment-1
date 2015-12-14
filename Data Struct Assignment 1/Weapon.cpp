/****************************************************************************************/
/*!

\file Weapon.cpp
\Author Wong Keng Han Ashley
\par 155135S@mymail.nyp.edu.sg
\brief

Dfination for all the methods in Weapon.h

*/
/****************************************************************************************/


#include "Weapon.h"


/****************************************************************************************/
/*!
\brief
Constructor for class Weapon


\return
nothing

*/
/****************************************************************************************/
Weapon::Weapon(const string& name, const int& durability, const int& attackDmg):
Item(name, durability),
kAttackDmg(attackDmg > 0 ? attackDmg : 0)
{





}

/****************************************************************************************/
/*!
\brief
Destructor for class Weapon



\return
nothing

*/
/****************************************************************************************/
Weapon::~Weapon(){






}



/****************************************************************************************/
/*!
\brief
Destructor for class Weapon


\param attack damage
the amount of damage a weapon has

\return
attack damage

*/
/****************************************************************************************/
const int Weapon::getAttackDmg(){

    if (durability_ > 0){
        return kAttackDmg;
    }
    else{
        return 1;
    }

}

/****************************************************************************************/
/*!
\brief
Destructor for class Weapon


\param damage
reduces the amount of durability a weapon has

\return
nothing

*/
/****************************************************************************************/

void Weapon::receiveDamage(const int& damage){

	durability_ -= damage / 2;

}