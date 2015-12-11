#ifndef _GAMEOBJECT_H
#define _GAMEOBJECT_H

#include <string>
using std::string;


//Pure virtual class
class GameObject
{
public:

    virtual ~GameObject();
	virtual string getName() = 0;
	virtual int getCount() = 0;




protected:

	GameObject(const string& name):kName(name), count_(count_ + 1){};




private:

	int count_;
	const string kName;





};

#endif