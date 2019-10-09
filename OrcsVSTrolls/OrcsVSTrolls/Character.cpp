#include "Character.h"
#include <string>
#include "Interface.h"

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
	Character* ptr_characterToAttack;
	Attack* ptr_attack;

	//choose a player to attack

	ptr_characterToAttack = Interface::userCharacterChoice(playersPtr,"Choose a Character to attack");
	if (ptr_characterToAttack != nullptr)
	{
		//attack 
		ptr_attack = Interface::userAttackChoice(m_attacks);
		attackCharacter(ptr_characterToAttack,ptr_attack);


	}
	else
	{
		Interface::display(this->toString() + " want to be nice and don't attack this turn");
	}

	//end of turn 
	Interface::display("------Regeneration Phase------");
	endOfTurn();
}


void Character::attackCharacter(Character* ptr_defender, Attack* ptr_attack)
{
	if (ptr_attack != nullptr)
	{
		Interface::display(this->toString() + " attack " + ptr_defender->toString() + " with " + ptr_attack->toString());
		Shield* defenderShield = ptr_defender->getSelectedShieldPtr();
		ptr_attack->doAttack(this, ptr_defender, defenderShield,getBonusMalusMeleeAttack(),getBonusMalusMagicAttack());
	}
	else
	{
		Interface::display(this->toString() + " abort his attack against " + ptr_defender->toString());
	}

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

void Character::selectShield()
{
	std::cout << "!!IMPLEMENT Character::selectShield() !!" << std::endl;
}


void Character::endOfTurn()
{

}




