#include "Orc.h"
#include "Interface.h"
#include <string>

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

//--------------------------------Getters---------------------------------------------------

std::string Orc::getType()
{
	return "ORC";
}


int Orc::getBonusMalusMagicAttack()
{
	return 1;
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
		Interface::display(this->toString() + " + " + std::to_string(manaPoint) + " mana points");
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



