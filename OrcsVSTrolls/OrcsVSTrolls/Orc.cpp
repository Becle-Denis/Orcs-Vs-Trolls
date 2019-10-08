#include "Orc.h"

//--------------------------------Constructor--------------------------------------------------

Orc::Orc() :
	Character("Enemy", 12, 7, false)
{

}

Orc::Orc(std::string name) :
	Character(name, 12, 7)
{

}

Orc::~Orc()
{

}


//--------------------------------toString--------------------------------------------------

std::string Orc::toString()
{
	return "ORC " + getName();
}

std::string Orc::toStringDescription()
{
	return toString() + "\n" + Character::toStringChatacterAttribute();
}

//--------------------------------Actions---------------------------------------------------

void Orc::gainMana(int manaPoint)
{
	if (manaPoint > 0)
	{
		if (m_manaPoint + manaPoint > 10)
		{
			manaPoint = 10 - m_manaPoint;
		}
		m_manaPoint += manaPoint;
	}
}

bool Orc::spendMana(int manaPoint)
{
	manaPoint -= 1;
	if (manaPoint < 0)
	{
		manaPoint = 0;
	}
	return Character::spendMana(manaPoint);
}

void Orc::endOfTurn()
{
	this->gainMana(3);
}



