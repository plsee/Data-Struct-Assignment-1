#include "Item.h"


Item::Item(const string& name, const int& durability): 
durability_(durability), 
GameObject(name)
{






}


const int Item::getDurability(){



		return durability_;

	


}