// Orc VS Trolls 
// Becle Denis C00254311
#ifndef HUMAN
#define HUMAN

#include <iostream>
#include "Character.h"
#include "Shield.h"

/// <summary>
/// The human are smart 
/// Charateristics of Human : 
/// - initial LivePoint 15
/// - Initial Mana 5
/// - can choose shield during attacks 
/// - Max Mana 8 
/// - End of turn : +2Mana
/// </summary>
class Human : public Character {

public:

	Human(); //constructor for AI Human
	Human(std::string name); //constructor for player Human

	~Human();

	//Overrided Character functions 
	std::string getType();
	void endOfTurn();
	void gainMana(int manaPoint);
	Shield* getSelectedShieldPtr();


};

#endif // !HUMAN


