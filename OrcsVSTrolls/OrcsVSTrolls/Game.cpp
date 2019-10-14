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
			if (ptr_char->isAlive())
			{
				Interface::clear();
				Interface::display(this->toString());
				Interface::display("");

				Interface::display("Turn " + std::to_string(m_tour) + " : " + ptr_char->toString(),Color::BLUE2);
				if (ptr_char->getIndexPlayer() != -1)
				{
					Interface::display("Player " + std::to_string(ptr_char->getIndexPlayer()) + " take Control",Color::GRAY);
				}
				Interface::pause();

				ptr_char->playTurn(m_characters);

				Interface::display("End of Turn " + std::to_string(m_tour) + " : " + ptr_char->toString(), Color::BLUE2);
				Interface::pause();
			}

		}
		Interface::clear();
		Interface::display(this->toString());
		Interface::display("");
		Interface::display("End of Turn " + std::to_string(m_tour), Color::BLUE2);
		Interface::pause();

		winner = this->winner();

	} while (winner == -1);

	Interface::clear();
	Interface::display(this->toString());
	Interface::display("\nGAME OVER\nWINNER : " + m_characters.at(winner)->toString(), Color::GREEN2);
	Interface::pause();

}

int Game::winner()
{
	int win = -1;
	int nbAlive = 0;
	for (unsigned int i = 0; i < m_characters.size(); i++)
	{
		if (m_characters.at(i)->isAlive())
		{
			win = static_cast<int>(i);
			nbAlive++;
		}
	}
	if (nbAlive == 1)
	{
		return win;
	}
	return -1;
}

std::string Game::toString()
{
	std::vector<std::string> names;
	std::vector<std::string> types;
	std::vector<bool> lifeStatus;
	std::vector<int> lifePoints;
	std::vector<int> manaPoints;

	//general information 
	std::string s = "GAME\n";
	s += "Turn " + std::to_string(m_tour) + "\nCharacters\n";

	s += "------------------------------------------------------------------\n";

	//get players Informations 
	for (Character* ptr_char : m_characters)
	{
		names.push_back(ptr_char->getName());
		types.push_back(ptr_char->getType());
		lifeStatus.push_back(ptr_char->isAlive());
		lifePoints.push_back(ptr_char->getLifePoint());
		manaPoints.push_back(ptr_char->getManaPoint());
	}

	//name
	for (std::string name : names)
	{
		s += name + "\t\t|";
	}
	s += "\n";

	//type
	for (std::string type : types)
	{
		s += type + "\t\t|";
	}
	s += "\n";

	//lifeStatus
	for (bool status : lifeStatus)
	{
		if (status)
		{
			s += "Alive\t\t|";
		}
		else
		{
			s += "DEAD\t\t|";
		}
	}
	s += "\n";

	//lifePoint
	for (int lp : lifePoints)
	{
		s += "Life : " + std::to_string(lp) + "\t|";
	}
	s += "\n";

	//manaPoint
	for (int mp : manaPoints)
	{
		s += "Mana : " + std::to_string(mp) + "\t|";
	}
	s += "\n";
	
	s += "------------------------------------------------------------------\n";

	return s;
}

