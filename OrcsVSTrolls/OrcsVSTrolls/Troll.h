// Orc VS Trolls 
// Becle Denis C00254311
#ifndef TROLL
#define TROLL

#include <iostream>
#include "Character.h"

/// <summary>
/// The trolls are not good with magic stuff but regenerate each turn 
/// Charateristics of Troll : 
/// - MeleeAttack +1PV 
/// - Max Mana 5 
/// - End of turn : +1PV / +1Mana 
/// </summary>
class Troll : public Character {
public:
	Troll();
	~Troll();
};

#endif // !TROLL



