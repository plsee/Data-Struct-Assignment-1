/****************************************************************************************/
/*!

\file Dweller.Cpp
\Author Wong Keng Han Ashley
\par 155135S@mymail.nyp.edu.sg
\brief

Dfination for all the methods in dweller.h

*/
/****************************************************************************************/


#include "Dweller.h"

/****************************************************************************************/
/*!
\brief
Default constructor for class Dweller.
Constructor for the class Dweller used when a Dweller object is created.

\return
Nothing

*/
/****************************************************************************************/


Dweller::Dweller(const string& name, const int& SPECIAL):
GameObject(name),
SPECIAL_(SPECIAL),
position_(0, 0),
health_(100),
radiation_(0),
stimpak_(0),
radAway_(0),
outfit_(nullptr),
weapon_(nullptr)
{

	
	

}

/****************************************************************************************/
/*!
\brief
Default Destructor for class Dweller

\param rhs
Destructor for the class Dweller used when a Dweller object is created

\return
Nothing

*/
/****************************************************************************************/

Dweller::~Dweller(){





}

/****************************************************************************************/
/*!
\brief
returns special

\param rhs
Calculates the total special

\return
special_

*/
/****************************************************************************************/
const int Dweller::getSPECIAL(){

    int totalSpecial = 0;
    int dwellerSpecial = SPECIAL_;
   
    if (outfit_){
        
        int outfitSpecial = outfit_->getSPECIAL();
        for (int i = 0; i < 7; i++){

            if ((dwellerSpecial % 10) + (outfitSpecial % 10) >= 10){

                totalSpecial += 9 * pow(10, i);


            }
            else{

                totalSpecial += ((dwellerSpecial % 10) + (outfitSpecial % 10)) * pow(10, i);

            }
            
            outfitSpecial /= 10;
            dwellerSpecial /= 10;

        }
      
    }
    else{

        totalSpecial = dwellerSpecial;

    }

    return totalSpecial;

}

/****************************************************************************************/
/*!
\brief
Returns Dweller Current health

\param rhs
retrieves current health of dweller

\return
health_

*/
/****************************************************************************************/
const int Dweller::getCurrentHealth(){


	return health_;


}

/****************************************************************************************/
/*!
\brief
returns radiation

\param radiation
amount of damage you take from Radiation

\return
radiation_

*/
/****************************************************************************************/

const int Dweller::getCurrentRadDamage(){


	return radiation_;


}
/****************************************************************************************/
/*!
\brief
returns the amount of attack damage a Dweller has

\param attackDamage
the amount of damage a Dweller has


\return
damage

*/
/****************************************************************************************/
const int Dweller::getAttackDmg(){

	if (weapon_){

		return weapon_->getAttackDmg();

	}
	else{

		return 1;

	}
}

/****************************************************************************************/
/*!
\brief
set the postion of dweller

\param position
the position that is going to be set for the Dweller

\return
nothing

*/
/****************************************************************************************/

void Dweller::setPosition(const Vec2D& position){


	position_ = position;


}

/****************************************************************************************/
/*!
\brief
returns the dweller position

\param position
current Position of a Dweller

\return
position_

*/
/****************************************************************************************/
const Vec2D Dweller::getPosition(){


	return position_;


}

/****************************************************************************************/
/*!
\brief
damages the Dweller

\param health
amount of health a Dweller has

\return
nothing

*/
/****************************************************************************************/
void Dweller::receiveHealthDamage(const int& health){


	health_ -= health;


}

/****************************************************************************************/
/*!
\brief
increases amount of radiation

\param radiation
the dama

\return
nothing

*/
/****************************************************************************************/

void Dweller::receiveRadDamage(const int& radiation){


	radiation_ += radiation;

}

/****************************************************************************************/
/*!
\brief
damages the equipments

\param durability
the durability of a Weapon / Outfit

\return
nothing

*/
/****************************************************************************************/
void Dweller::receiveEquipmentDamage(const int& durability){

    if (outfit_){
        outfit_->receiveDamage(durability);
    }
    if (weapon_){
        weapon_->receiveDamage(durability);
    }

}

/****************************************************************************************/
/*!
\brief
add the amount of simpak

\param Stimpak
an Item

\return
nothing

*/
/****************************************************************************************/
void Dweller::addStimpak(const int& stimpak){


	stimpak_ += stimpak;

}

/****************************************************************************************/
/*!
\brief
gain one radaway

\param radaway
a consumeable Item

\return
nothing

*/
/****************************************************************************************/
void Dweller::addRadAway(const int& radAway){

	radAway_ += radAway;

}

/****************************************************************************************/
/*!
\brief
use one stimpak

\param Stimpak
it is a consumeable Item

\return
nothing

*/
/****************************************************************************************/
void Dweller::useStimpak(){

	health_ += 20;


}

/****************************************************************************************/
/*!
\brief
uses one radaway

\param radiation
the amount of damage a dweller takes from radiation

\return
nothing

*/
/****************************************************************************************/
void Dweller::useRadAway(){

	radiation_ -= 10;


}

/****************************************************************************************/
/*!
\brief
Sets an Outfit

\param outfit
Outfit is an Item that gives a Dweller special;

\return
the old equipped Outfit

*/
/****************************************************************************************/
Outfit* Dweller::assignOutfit(Outfit * outfit){

	Outfit* oldOutfit = outfit_;
	outfit_ = outfit;

	return oldOutfit;

}

/****************************************************************************************/
/*!
\brief
Sets an Weapon

\param Weapon
Weapon is an Item that gives a Dweller attack;

\return
the old equipped Weapon

*/
/****************************************************************************************/
Weapon* Dweller::assignWeapon(Weapon* weapon){

	Weapon* oldWeapon = weapon_;
	weapon_ = weapon;

	return oldWeapon;

}


/****************************************************************************************/
/*!
\brief
Checks if a Dweller is dead

\param currentHealth
The health of a Dweller

\return
the old equipped outfit

*/
/****************************************************************************************/
bool Dweller::isDead(){


	if (getCurrentHealth() <= 0){

		return true;

	}
	else{

		return false;


	}


}