/****************************************************************************************/
/*!

\file Item.h
\Author Wong Keng Han Ashley
\par 155135S@mymail.nyp.edu.sg
\brief

Class to Difine an Item

*/
/****************************************************************************************/



#ifndef _ITEM_H
#define _ITEM_H

#include "GameObject.h"


/****************************************************************************************/
/*!

\brief

Virtual class to define an Item

*/
/****************************************************************************************/
class Item : public GameObject
{

public:

	//Methods

	virtual void receiveDamage(const int& damage) = 0; //Pure Virtual Function

	const int getDurability();// Returns Durability_

	//Destructor
	virtual ~Item();
	
	//Constructor
	Item(const string& name = "", const int& durability = 0);



protected:


	//Variable

	int durability_; //Durability





private:
	




};


#endif