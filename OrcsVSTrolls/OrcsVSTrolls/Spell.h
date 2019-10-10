// Orc VS Trolls 
// Becle Denis C00254311
#ifndef SPELL
#define SPELL

#include "Attack.h"
#include "Character.h"

/// <summary>
/// Abstract class to define spell attacks 
/// </summary>
class Spell : public Attack
{
public :
	Spell(int manaCost);
	~Spell();

	virtual void doAttack(Character* attacker, Character* attacked, Shield * shield, int meleeBonusMalus = 0, int magicBonusMalus = 0);

	//Overrided GameObject functions
	std::string toString() = 0;
	std::string toStringDescription() = 0;
private:

	//pure virtual function
	virtual void doSpell(Character* attacker, Character* attacked, Shield* shield, int magicBonusMalus = 0) = 0;
	int m_manaCost;
};


#endif // !SPELL


