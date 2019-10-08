// Orc VS Trolls 
// Becle Denis C00254311
#ifndef ATTACK
#define ATTACK

#include <iostream>
#include "GameObject.h"
#include "Shield.h"
//#include "Character.h" integration Conflict 

class Character; //further declaration to avoid conflict 

class Attack : public GameObject {
public :
	virtual void doAttack(Character * attacker, Character * defender, Shield * shield, int meleeBonusMalus = 0, int magicBonusMalus = 0) = 0;
};

#endif // !ATTACK
