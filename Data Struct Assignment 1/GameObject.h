/****************************************************************************************/
/*!

\file GameObject.h
\Author Wong Keng Han Ashley
\par 155135S@mymail.nyp.edu.sg
\brief

Class to Difine a Game Object

*/
/****************************************************************************************/

#ifndef _GAMEOBJECT_H
#define _GAMEOBJECT_H

#include <string>
using std::string;


/****************************************************************************************/
/*!

\brief

Virtual class to define a Game Object

*/
/****************************************************************************************/

class GameObject
{
public:

	//Destructor
    virtual ~GameObject();

	string getName(); //Returns Name 
	static int getCount(); //Return number of objects




protected:

	//Constructor
	GameObject(const string& name = "");




private:

	static int count_;//Stores the amount of objects

	const string kName; //Stores item name



};


#endif