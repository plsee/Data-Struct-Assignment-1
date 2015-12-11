#ifndef _DWELLER_H
#define _DWELLER_H

#include "GameObject.h"
#include "Vec2D.h"
#include "Item.h"
#include "Weapon.h"
#include "Outfit.h"



class Dweller :public GameObject{

public:

	//Constructor
	Dweller(const string& name = "", const int& count = 0);


	//Destructor
	virtual ~Dweller();


	virtual const int getSPECIAL();
	virtual const int getCurrentHealth();
	virtual const int getCurrentRadDamage();
	virtual const int getAttackDmg();
	virtual void setPosition(const Vec2D& position);
	virtual const Vec2D getPosition();
	virtual void receiveHealthDamage(const int& health);
	virtual void receiveRadDamage(const int& health);
	virtual void receiveEquipmentDamage(const int& durability);
	virtual void addStimpak(const int& stimpak);
	virtual void addRadAway(const int& radiation);
	virtual void useStimpak();
	virtual void useRadAway();
	virtual Outfit* assignOutfit(Outfit * outfit);
	virtual Weapon* assignWeapon(Weapon* weapon);
	bool isDead();






private:

	Vec2D position_;
	int SPECIAL_;
	int health_;
	int radiation_;
	int stimpak_;
	int radAway_;
	Outfit* outfit_;
	Weapon* weapon_;




};

#endif