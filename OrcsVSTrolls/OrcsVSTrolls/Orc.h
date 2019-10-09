// Orc VS Trolls 
// Becle Denis C00254311
#ifndef ORC
#define ORC

#include <iostream>
#include "Character.h"

/// <summary>
/// The orcs are gifted with magic
/// Charateristics of Orc :
/// - initial LivePoint 12
/// - Initial Mana 7
/// - MagicAttack +1 PV -1 cost
/// - end of turn : +3Mana 
/// - Max Mana 10
/// </summary>
class Orc : public Character {
public:

	Orc(); //constructor for AI Orc
	Orc(std::string name); //constructor for player Orc

	~Orc();

	//Overrided Character functions 
	std::string getType();
	void endOfTurn();
	void gainMana(int manaPoint);
	bool spendMana(int manaPoint);
	int getBonusMalusMagicAttack();
	

};

#endif // !ORC



