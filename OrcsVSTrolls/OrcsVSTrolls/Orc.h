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
/// - MagicAttack +1 
/// - end of turn : +3Mana 
/// - Max Mana 10
/// </summary>
class Orc : public Character {
public:

	Orc(); //constructor for AI Orc
	Orc(std::string name); //constructor for player Orc

	~Orc();

	//Overrided Character functions 
	void endOfTurn();
	void gainMana(int manaPoint);

	//Overrided GameObject functions
	std::string toString();
	std::string toStringDescription();
};

#endif // !ORC



