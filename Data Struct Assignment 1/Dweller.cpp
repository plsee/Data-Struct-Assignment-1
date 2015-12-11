#include "Dweller.h"


Dweller::Dweller(const string& name, const int& SPECIAL):
GameObject(name),
SPECIAL_(SPECIAL),
position_(0, 0),
health_(100),
radiation_(0),
stimpak_(0),
radAway_(0),
outfit_(nullptr),
weapon_(nullptr)
{

	
	

}


Dweller::~Dweller(){





}

const int Dweller::getSPECIAL(){

	int finalSpecial = SPECIAL_ + outfit_->getSPECIAL();

	int specialValues[7];
	
	if (finalSpecial >= 10000000){

		return 9999999;

	}
	else {
		for (int i = 0; i < 7; i++){

			specialValues[i] = finalSpecial % 10;
			finalSpecial /= 10;

		}
		for (int i = 0; i < 7; i++){

			finalSpecial += specialValues[i] * pow(10, i);


		}

	}

	return finalSpecial;

}


const int Dweller::getCurrentHealth(){


	return health_;


}

const int Dweller::getCurrentRadDamage(){


	return radiation_;



}

const int Dweller::getAttackDmg(){

	if (weapon_){

		return weapon_->getAttackDmg();

	}
	else{

		return 1;

	}
}

void Dweller::setPosition(const Vec2D& position){


	position_ = position;


}


const Vec2D Dweller::getPosition(){


	return position_;


}
void Dweller::receiveHealthDamage(const int& health){


	health_ -= health;


}

void Dweller::receiveRadDamage(const int& radiation){


	radiation_ += radiation;

}

void Dweller::receiveEquipmentDamage(const int& durability){

	outfit_->receiveDamage(durability);
	weapon_->receiveDamage(durability / 2);

}

void Dweller::addStimpak(const int& stimpak){


	stimpak_ += stimpak;

}


void Dweller::addRadAway(const int& radAway){


	radAway_ + radAway;


}


void Dweller::useStimpak(){

	health_ += 20;


}


void Dweller::useRadAway(){

	radiation_ -= 10;


}

Outfit* Dweller::assignOutfit(Outfit * outfit){

	Outfit* oldOutfit = outfit_;
	outfit_ = outfit;

	return oldOutfit;

}


Weapon* Dweller::assignWeapon(Weapon* weapon){

	Weapon* oldWeapon = weapon_;
	weapon_ = weapon;

	return oldWeapon;

}


bool Dweller::isDead(){


	if (getCurrentHealth() <= 0){

		return true;

	}
	else{

		return false;


	}


}