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


	const int getSPECIAL();
	const int getCurrentHealth();
	const int getCurrentRadDamage();
	const int getAttackDmg();
	void setPosition(const Vec2D& position);
	const Vec2D getPosition();
	void receiveHealthDamage(const int& health);
	void receiveRadDamage(const int& health);
	void receiveEquipmentDamage(const int& durability);
	void addStimpak(const int& stimpak);
	void addRadAway(const int& radiation);
	void useStimpak();
	void useRadAway();
	Outfit* assignOutfit(Outfit* outfit);
	Weapon* assignWeapon(Weapon* weapon);
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