#include "IronShield.h"

IronShield::IronShield() : Shield(20)
{

}

IronShield::~IronShield()
{

}

int IronShield::protect(int& meleeAttackPoint, int& magicAttackPoint, int directShieldDamage)
{
	this->takeDamage(directShieldDamage);
	meleeAttackPoint -= 2;
	magicAttackPoint -= 1;
	return 0;
}

std::string IronShield::toString()
{
	return "Iron Shield";
}

std::string IronShield::toStringDescription()
{
	return toString() + "\nProtect\n-2 Melee Attacks\n-1 Magic Attacks";
}