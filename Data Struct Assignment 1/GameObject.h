#ifndef _GAMEOBJECT_H
#define _GAMEOBJECT_H

#include <string>
using std::string;


//Pure virtual class
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