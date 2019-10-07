// Orc VS Trolls 
// Becle Denis C00254311
#ifndef CHARACTER
#define CHARACTER

#include <iostream>
#include "GameObject.h"
#include "Shield.h"
#include "Attack.h"

/// <summary>
/// Abstract class to define a charater type
/// </summary>
class Character : public GameObject {
public :
	virtual void attackCharacter(Character * ptr_attacker, Character * ptr_defender, Attack * ptr_attack) = 0;
	std::string getName();
	virtual Shield * getShield() = 0;
	void takeDamage(int damagePoint);
	void gainHealth(int healthPoint);
	void spendMana(int manaPoint);
	void gainMana(int manaPoint);
	Shield * getSelectedShieldPtr();
	void playTurn();


protected:
	int m_playerIndex;
	int m_lifePoint;
	int m_manaPoint;

private :
	std::string name;
	int static nbOfCharacters;
};

#endif // !CHARACTER



