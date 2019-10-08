#include "Troll.h"

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
	this->gainMana(1);
	this->gainHealth(1);
}

//--------------------------------toString--------------------------------------------------

std::string Troll::toString()
{
	return "Troll "+getName();
}

std::string Troll::toStringDescription()
{
	return toString()+"\n"+Character::toStringChatacterAttribute();
}