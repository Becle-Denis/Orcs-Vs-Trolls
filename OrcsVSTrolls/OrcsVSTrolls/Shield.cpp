#include "Shield.h"
#include "Interface.h"
#include <string>


//--------------------------------COSTRUCTORS / Destructors----------------------------

Shield::Shield(int lifePoint) :
	m_livePoint(lifePoint),
	m_destroyed(false)
{

}

Shield::~Shield() 
{

}

//---------------------------------Getters-----------------------------------------------

bool Shield::isWorking()
{
	return !m_destroyed;
}

//---------------------------------Modifier----------------------------------------------

void Shield::gainLife(int lifePoint)
{
	if (lifePoint > 0)
	{
		Interface::display(this->toString() + " + " + std::to_string(lifePoint) + " life points");
		m_livePoint += lifePoint;
	}
}

void Shield::takeDamage(int damagePoint)
{
	if (damagePoint > 0)
	{
		Interface::display(this->toString() + " - " + std::to_string(damagePoint) + " life points");
		m_livePoint -= damagePoint;
	}

	if (m_livePoint <= 0)
	{
		Interface::display(this->toString() + " is destroyed");
		m_destroyed = true;
	}
}

//---------------------------------Actions-----------------------------------------------

int Shield::defend(int& meleeAttackPoint, int& magicAttackPoint, int directShieldDamage)
{
	if (this->isWorking())
	{
		Interface::display(this->toString() + " protect");
		return this->protect(meleeAttackPoint, magicAttackPoint, directShieldDamage);
	}
	else 
	{
		Interface::display(this->toString() + " is destroyed or cancelled");
		return 0;
	}
}
