#include "Human.h"
#include "Interface.h"
#include <string>

//--------------------------------Constructor--------------------------------------------------

Human::Human() :
	Character("Enemy",15,5,false)
{

}

Human::Human(std::string name) :
	Character(name,15,5)
{

}

Human::~Human()
{

}

//--------------------------------Getters---------------------------------------------------

std::string Human::getType()
{
	return "HUMAN";
}

//--------------------------------Actions---------------------------------------------------

void Human::gainMana(int manaPoint)
{
	if (manaPoint > 0)
	{
		if (m_manaPoint + manaPoint > 8)
		{
			manaPoint = 8 - m_manaPoint;
		}
		Interface::display(this->toString() + " + " + std::to_string(manaPoint) + " mana points");
		m_manaPoint += manaPoint;
	}
}

void Human::endOfTurn()
{
	this->gainMana(2);
}

Shield* Human::getSelectedShieldPtr()
{
	Shield* ptr_shield;
	ptr_shield = Interface::userShieldChoice(m_shields, "Player "+ std::to_string(m_playerIndex)+ ", " + getName() + " : Choose a shield to defend !");
	return ptr_shield;
}

