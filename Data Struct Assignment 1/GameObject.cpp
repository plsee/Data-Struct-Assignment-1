/****************************************************************************************/
/*!

\file GameObject.Cpp
\Author Wong Keng Han Ashley
\par 155135S@mymail.nyp.edu.sg
\brief

Dfination for all the methods in GameObject.h

*/
/****************************************************************************************/

#include "GameObject.h"

int GameObject::count_ = 0;

/****************************************************************************************/
/*!
\brief
Default constructor for class GameObject
Constructor for the class GameObject used when a GameObject object is created

\return
Nothing

*/
/****************************************************************************************/
GameObject::GameObject(const string& name) :
kName(name)
{

	count_++;


}


/****************************************************************************************/
/*!
\brief
Default Destructor for class GameObject
Constructor for the class GameObject used when a GameObject object is Destroyed

\return
Nothing

*/
/****************************************************************************************/
GameObject::~GameObject(){



}


/****************************************************************************************/
/*!
\brief
Returns the name of the GameObject

\param name
the name of the game Object

\return
Name

*/
/****************************************************************************************/
string GameObject::getName(){



	return kName;



}

/****************************************************************************************/
/*!
\brief
Returns the name of the GameObject

\param name
the name of the game Object

\return
Name

*/
/****************************************************************************************/
int GameObject::getCount(){


	return count_;


}

