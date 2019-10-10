// Orc VS Trolls 
// Becle Denis C00254311
#ifndef AI
#define AI

#include "Character.h"
#include "Attack.h"
#include "Shield.h"
#include <vector>

class Ai
{
public:
	static Character* aiCharacterChoice(std::vector<Character*> characters);
	static Attack* aiAttackChoice(std::vector<Attack*> attacks);
	static Shield* aiShieldChoice(std::vector<Shield*> shield);

private:
	static int selectRandom(unsigned int max);
};

#endif // !AI



