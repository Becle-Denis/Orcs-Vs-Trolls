// Orc VS Trolls 
// Becle Denis C00254311
#ifndef ATTACK
#define ATTACK

#include <iostream>
#include "GameObject.h"
#include "Shield.h"
#include <vector>
//#include "Character.h" integration Conflict 

class Character; //further declaration to avoid conflict 

class Attack : public GameObject {
public :
	Attack(bool characterNeeded = true);

	//pure virutal function 
	void attack(Character* attacker, std::vector<Character*> attackableCharactersPtr);
	virtual void doAttack(Character * attacker, Character * defender, Shield * shield, int meleeBonusMalus = 0, int magicBonusMalus = 0) = 0;

	//Overrided GameObject functions
	std::string toString() = 0;
	std::string toStringDescription() = 0;

private:
	bool m_defenderNeeded; // true if the attack need a specific character target
};

#endif // !ATTACK

