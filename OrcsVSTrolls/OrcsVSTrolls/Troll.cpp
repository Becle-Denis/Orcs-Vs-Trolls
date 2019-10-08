#include "Troll.h"


//--------------------------------Constructor--------------------------------------------------
Troll::Troll() :
	Character("Enemy", 20, 2, false)
{

}

Troll::Troll(std::string name) :
	Character(name, 20, 2)
{
}

Troll::~Troll()
{

}

//--------------------------------Getters---------------------------------------------------

std::string Troll::getType()
{
	return "TROLL";
}



//--------------------------------Actions---------------------------------------------------

void Troll::gainMana(int manaPoint)
{
	if (manaPoint > 0)
	{
		if (m_manaPoint + manaPoint > 5)
		{
			manaPoint = 5 - m_manaPoint;
		}
		m_manaPoint += manaPoint;
	}

}

void Troll::endOfTurn()
{
	this->gainHealth(1);
}