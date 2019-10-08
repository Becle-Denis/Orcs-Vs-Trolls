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

//--------------------------------Getters---------------------------------------------------

std::string Orc::getType()
{
	return "ORC";
}

//--------------------------------Actions---------------------------------------------------

void Orc::attackCharacter(Character* ptr_defender, Attack* ptr_attack)
{
	Shield* defenderShield = ptr_defender->getSelectedShieldPtr();
	ptr_attack->doAttack(this, ptr_defender, defenderShield,0,1);
}

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



