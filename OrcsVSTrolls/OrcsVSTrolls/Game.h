// Orc VS Trolls 
// Becle Denis C00254311
#ifndef GAME
#define GAME

#include <vector>
#include "Character.h"

class Game
{
public:
	Game(std::vector<Character*> characters);
	~Game();

	void play();
	int winner();

private:
	std::vector<Character*> m_characters;
	int m_tour;
	std::string toString();
};

#endif // !GAME



