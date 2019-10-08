#include "Character.h"
#include <string>

int Character::nbOfPlayerCharacters = 0;

//--------------------------------Constructor-----------------------------------------------
Character::Character(std::string name, int lifePoint, int manaPoint, bool playerCharacter) :
	m_name(name),
	m_lifePoint(lifePoint),
	m_manaPoint(manaPoint),
	m_isAlive(true)
{
	if (playerCharacter)
	{
		this->m_playerIndex = nbOfPlayerCharacters;
		nbOfPlayerCharacters++;
	}
	else
	{
		this->m_playerIndex = -1; // for AI characters
	}
}

//--------------------------------Getter----------------------------------------------------

std::string Character::getName() const
{
	return m_name;
}

int Character::getLifePoint()
{
	return m_lifePoint;
}

int Character::getManaPoint()
{
	return m_manaPoint;
}

int Character::getIndexPlayer()
{
	return m_playerIndex;
}

bool Character::isAlive()
{
	return m_isAlive;
}

//--------------------------------Modifier--------------------------------------------------

void Character::gainHealth(int healthPoint)
{
	if (healthPoint > 0)
	{
		m_lifePoint += healthPoint;
	}
}

void Character::gainMana(int manaPoint)
{
	if (manaPoint > 0)
	{
		m_manaPoint += manaPoint;
	}

}

void Character::takeDamage(int damagePoint)
{
	if (damagePoint > 0)
	{
		m_lifePoint -= damagePoint;
	}

	if (m_lifePoint <= 0)
	{
		m_isAlive = false;
	}
}

bool Character::spendMana(int manaPoint)
{
	if (manaPoint > m_manaPoint)
	{
		return false;
	}
	else if (manaPoint > 0)
	{
		m_manaPoint -= manaPoint;
		return true;
	}
	return false;
}


//--------------------------------toString--------------------------------------------------


//--------------------------------toString--------------------------------------------------

std::string Character::toString()
{
	return getType() + " " + getName();
}

std::string Character::toStringDescription()
{
	return toString() + "\n" + toStringChatacterAttribute();
}

std::string Character::toStringChatacterAttribute()
{
	std::string liveStatus;
	std::string playerStatus;
	if (m_isAlive)
	{
		 liveStatus = "ALIVE";
	}
	else
	{
		liveStatus = "DEAD";
	}

	if (m_playerIndex == -1)
	{
		playerStatus = "Real enemy";
	}
	else
	{
		playerStatus = "Player "+ std::to_string(m_playerIndex);
	}

	return playerStatus + "\n" + liveStatus + "\nLife Points : "+ std::to_string(m_lifePoint) + "\nMana Points : " + std::to_string(m_manaPoint);
}


//--------------------------------Actions---------------------------------------------------

void Character::playTurn(std::vector<Character*> PlayersPtr)
{
	std::cout << "!!IMPLEMENT void Character::playTurn(std::vector<Character*> PlayersPtr)" << std::endl;

	//choose a player to attack or change shield

	//attack 

	//end of turn 
	endOfTurn();
}


void Character::attackCharacter(Character* ptr_defender, Attack* ptr_attack)
{
	Shield* defenderShield = ptr_defender->getSelectedShieldPtr();
	ptr_attack->doAttack(this,ptr_defender,defenderShield);
}


Shield* Character::getSelectedShieldPtr()
{
	std::cout << "!!IMPLEMENT Character::getSelectedShieldPtr()" << std::endl;
	return nullptr;
}



void Character::endOfTurn()
{

}




