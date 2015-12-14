/****************************************************************************************/
/*!

\file Item.Cpp
\Author Wong Keng Han Ashley
\par 155135S@mymail.nyp.edu.sg
\brief

Dfination for all the methods in Item.h

*/
/****************************************************************************************/

#include "Item.h"

/****************************************************************************************/
/*!
\brief
Deafult Constructor of the class Item

\return
nothing

*/
/****************************************************************************************/
Item::Item(const string& name, const int& durability): 
durability_(durability), 
GameObject(name)
{






}

/****************************************************************************************/
/*!
\brief
Default Destructor of class Item



\return
nothing

*/
/****************************************************************************************/
Item::~Item(){




}

/****************************************************************************************/
/*!
\brief
Returns the Durability of an Item

\param durability
the amount of durability and Item has

\return
Durability

*/
/****************************************************************************************/
const int Item::getDurability(){



		return durability_;

	


}