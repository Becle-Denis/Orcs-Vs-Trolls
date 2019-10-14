#include "HalfMagicShield.h"
#include "Interface.h"
#include <ctime>

HalfMagicShield::HalfMagicShield() : Shield(8)
{

}

HalfMagicShield::~HalfMagicShield()
{

}

void HalfMagicShield::gainLife(int livePoint)
{
	if (m_livePoint + livePoint > 8)
	{
		livePoint = 8 - m_livePoint;
	}
	Shield::gainLife(livePoint);
}

int HalfMagicShield::protect(int& meleeAttackPoint, int& magicAttackPoint, int directShieldDamage)
{
	srand(static_cast<unsigned int>(time(0)));
	int attackerDamage = 0;

	this->takeDamage(directShieldDamage);
	if (rand() % 100 < 60)
	{
		meleeAttackPoint -= 2;
		magicAttackPoint -= 4;
	}
	else
	{
		Interface::display(this->toString() + " CRITICAL");
		this->takeDamage(1);
		attackerDamage = 1;
	}

	if (rand() < 40)
	{
		this->gainLife(2);
	}
	return attackerDamage;

}

std::string HalfMagicShield::toString()
{
	return "Half Magic Shield";
}

std::string HalfMagicShield::toStringDescription()
{
	return toString() + "\nProtect\n-2 Melee Attacks\n-4 Magic Attacks\nCRITICAL attacker -1 Life Point, shield -1 life Point\nSometimes it regenerate";
}





