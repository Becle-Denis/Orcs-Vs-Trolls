// Orc VS Trolls 
// Becle Denis C00254311
#ifndef TROLL
#define TROLL

#include <iostream>
#include "Character.h"
#include "Shield.h"

/// <summary>
/// The trolls are not good with magic stuff but regenerate each turn 
/// Charateristics of Troll : 
/// - initial LivePoint 20
/// - Initial Mana 2
/// - MeleeAttack +1PV 
/// - Max Mana 5 
/// - End of turn : +1PV / +1Mana 
/// </summary>
class Troll : public Character {
public:
	/// <summary>
	/// Constructor for AI troll
	/// </summary>
	Troll();

	/// <summary>
	/// Constructors for player troll
	/// </summary>
	/// <param name="name"></param>
	Troll(std::string name);

	~Troll();


	//Overrided functions 

	void endOfTurn();
	void gainMana(int manaPoint);
	std::string toString();
	std::string toStringDescription();



};

#endif // !TROLL



