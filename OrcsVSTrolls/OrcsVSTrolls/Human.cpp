#include "Human.h"

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
		m_manaPoint += manaPoint;
	}
}

void Human::endOfTurn()
{
	this->gainMana(2);
}

Shield* Human::getSelectedShieldPtr()
{
	std::cout << "!!IMPLEMENT Human::getSelectedShieldPtr()" << std::endl;
	return nullptr;
}

