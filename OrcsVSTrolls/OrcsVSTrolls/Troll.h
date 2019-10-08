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
/// - Initial Mana 4
/// - MeleeAttack +1PV 
/// - Max Mana 5 
/// - End of turn : +1PV 
/// </summary>
class Troll : public Character {
public:
	
	Troll(); // Constructor for AI troll
	Troll(std::string name); // Constructors for player troll

	~Troll();


	//Overrided Character functions 
	std::string getType();
	void endOfTurn();
	void gainMana(int manaPoint);
	void attackCharacter(Character* ptr_defender, Attack* ptr_attack);





};

#endif // !TROLL



