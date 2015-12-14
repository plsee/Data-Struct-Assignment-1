/****************************************************************************************/
/*!

\file Outfit.Cpp
\Author Wong Keng Han Ashley
\par 155135S@mymail.nyp.edu.sg
\brief

Dfination for all the methods in Outfit.h

*/
/****************************************************************************************/

#include "Outfit.h"


/****************************************************************************************/
/*!
\brief
Constructor for class Outfit


\return
nothing

*/
/****************************************************************************************/
Outfit::Outfit(const string& name, const int& durability, const int& special):
Item(name, durability),
kSPECIAL(special)
{

	

}



/****************************************************************************************/
/*!
\brief
Destructor for class Outfit


\return
nothing

*/
/****************************************************************************************/
Outfit::~Outfit(){


	

}


/****************************************************************************************/
/*!
\brief
Gets the special of the outfit


\param special
amount of special an outfit has

\return
either special or 0

*/
/****************************************************************************************/
const int Outfit::getSPECIAL(){

	if (durability_ != 0){
		return kSPECIAL;
	}
	else{

		return 0;

	}

}


/****************************************************************************************/
/*!
\brief
Reduces the amount of durability an outfit has


\param damage
reduces amount of durability by damage

\return
nothing 


*/
/****************************************************************************************/
void Outfit::receiveDamage(const int& damage){

	durability_ -= damage;


}