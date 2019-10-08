// Orc VS Trolls 
// Becle Denis C00254311
#include "Game.h"
#include "Interface.h"
#include <string>

Game::Game(std::vector<Character*> Characters) :
	m_characters(Characters),
	m_tour(0)
{
}

Game::~Game()
{
}

void Game::play()
{
	int winner;
	//gameLoop
	do {
		m_tour++;


		//each player can play
		for (Character* ptr_char : m_characters)
		{
			Interface::clear();
			Interface::display(this->toString());
			Interface::display("");

			Interface::display("Turn " + std::to_string(m_tour) + " : " +ptr_char->toString());
			Interface::pause();

			ptr_char->playTurn(m_characters);

			Interface::display("End of Turn " + std::to_string(m_tour) + " : " + ptr_char->toString());
			Interface::pause();
		}
		Interface::clear();
		Interface::display(this->toString());
		Interface::display("");
		Interface::display("End of Turn " + std::to_string(m_tour));
		Interface::pause();

		winner = this->winner();

	} while (winner == -1);

	Interface::clear();
	Interface::display(this->toString());
	Interface::display("\nGAME OVER\nWINNER : " + m_characters.at(winner)->toString());
	Interface::pause;

}

int Game::winner()
{
	return -1;
}

std::string Game::toString()
{
	return "";
}

