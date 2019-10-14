#include "Attack.h"
#include "Character.h"
#include "Interface.h"
#include "Ai.h"
#include <vector>
//--------------------------------Constructor-----------------------------------------------

Attack::Attack(bool defenderNeeded) : m_defenderNeeded(defenderNeeded)
{

}

//--------------------------------Action----------------------------------------------------

void Attack::attack(Character* attacker, std::vector<Character*> attackableCharactersPtr)
{
	//Defender Selection
	Character* ptr_defender = nullptr;
	Shield* defenderShield = nullptr;
	if (m_defenderNeeded)
	{
		//choose a player to attack
		if (attacker->getIndexPlayer() != -1)
		{	//player
			ptr_defender = Interface::userCharacterChoice(attackableCharactersPtr, "Choose a Character to attack");
		}
		else
		{ //AI
			ptr_defender = Ai::aiCharacterChoice(attackableCharactersPtr);
		}
		
		if (ptr_defender != nullptr)
		{
			Interface::display(attacker->toString() + " attack " + ptr_defender->toString() + " with " + this->toString());
			defenderShield = ptr_defender->getSelectedShieldPtr();
			this->doAttack(attacker, ptr_defender, defenderShield, attacker->getBonusMalusMeleeAttack(), attacker->getBonusMalusMagicAttack());
		}
		else
		{
			Interface::display(attacker->toString() + " stops " + this->toString());
		}		
	}
	else
	{
		Interface::display(attacker->toString() + " call " + this->toString());
		this->doAttack(attacker, ptr_defender, defenderShield, attacker->getBonusMalusMeleeAttack(), attacker->getBonusMalusMagicAttack());
	}


}