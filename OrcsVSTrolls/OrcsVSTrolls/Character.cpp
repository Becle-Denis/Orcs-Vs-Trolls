#include "Character.h"
#include <string>
#include "Interface.h"
#include "Ai.h"

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
		this->m_playerIndex = nbOfPlayerCharacters + 1;
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

int Character::getBonusMalusMeleeAttack()
{
	return 0;
}

int Character::getBonusMalusMagicAttack()
{
	return 0;
}

//--------------------------------Modifier--------------------------------------------------

void Character::gainHealth(int healthPoint)
{
	if (healthPoint > 0)
	{
		m_lifePoint += healthPoint;
		Interface::display(this->toString() + " + " + std::to_string(healthPoint) + " life points",Color::GREEN2);
	}
}

void Character::gainMana(int manaPoint)
{
	if (manaPoint > 0)
	{
		m_manaPoint += manaPoint;
		Interface::display(this->toString() + " + " + std::to_string(manaPoint) + " mana points",Color::GREEN);
	}

}

void Character::takeDamage(int damagePoint)
{
	if (damagePoint > 0)
	{
		m_lifePoint -= damagePoint;
		Interface::display(this->toString() + " - " + std::to_string(damagePoint) + " life points",Color::RED);
		if (m_lifePoint <= 0)
		{
			Interface::display(this->toString() + " is dead ! ");
			m_isAlive = false;
		}
	}
}

bool Character::spendMana(int manaPoint)
{
	if (manaPoint > m_manaPoint)
	{
		return false;
	}
	else if (manaPoint >= 0)
	{
		m_manaPoint -= manaPoint;
		Interface::display(this->toString() + " - " + std::to_string(manaPoint) + " mana points",Color::RED);
		return true;
	}
	return false;
}



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

void Character::playTurn(std::vector<Character*> playersPtr)
{
	Interface::display("--------Attack Phase--------");
	Attack* ptr_attack;
	std::vector<Character*> attackableCharactersPtr;

	//selections of attackable characters
	for (Character* ptr_char : playersPtr)
	{
		if (ptr_char->isAlive() && ptr_char != this)
		{
			attackableCharactersPtr.push_back(ptr_char);
		}
	}

	
	//attack 
	if (m_playerIndex != -1)
	{	//player
		ptr_attack = Interface::userAttackChoice(m_attacks);
	}
	else
	{ //AI
		ptr_attack = Ai::aiAttackChoice(m_attacks);
	}
		
	if (ptr_attack != nullptr)
	{
		ptr_attack->attack(this, attackableCharactersPtr);
	}
	else
	{
		Interface::display(this->toString() + " want to be nice and don't attack this turn",Color::YELLOW);
	}

	//end of turn 
	Interface::display("------Regeneration Phase------");
	endOfTurn();
}



Shield* Character::getSelectedShieldPtr()
{
	if (m_shields.size() > 0)
	{
		return m_shields.front();
	}
	else
	{
		return nullptr;
	}
}

void Character::addAttack(Attack* ptr_attack)
{
	m_attacks.push_back(ptr_attack);
}

void Character::addShield(Shield* ptr_shield)
{
	m_shields.push_back(ptr_shield);
}



void Character::endOfTurn()
{

}




