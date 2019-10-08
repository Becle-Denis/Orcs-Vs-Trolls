// Orc VS Trolls 
// Becle Denis C00254311
#ifndef CHARACTER
#define CHARACTER

#include <iostream>
#include "GameObject.h"
#include "Shield.h"
#include "Attack.h"



/// <summary>
/// Abstract class to define a charater type
/// </summary>
class Character : public GameObject {
public:

	/// <summary>
	/// Contructor for player or AI character
	/// </summary>
	/// <param name="name">Name of the character</param>
	/// <param name="lifePoint">Initial lifePoint of the character</param>
	/// <param name="manaPoint">Initial ManaPoint of the character</param>
	Character(std::string name, int lifePoint, int manaPoint, bool playerCharacter = true);

	/// <summary>
	/// Abstract function, attack another character
	/// </summary>
	/// <param name="ptr_attacker">Attacker</param>
	/// <param name="ptr_defender">Defender</param>
	/// <param name="ptr_attack">Attack</param>
	virtual void attackCharacter(Character* ptr_attacker, Character* ptr_defender, Attack* ptr_attack);

	// Getters 
	std::string getName() const;
	virtual Shield* getSelectedShieldPtr();

	// modifier
	void takeDamage(int damagePoint);
	void gainHealth(int healthPoint);
	bool spendMana(int manaPoint);
	virtual void gainMana(int manaPoint);

	//Actions 
	void playTurn();
	virtual void endOfTurn();

	std::string toString() = 0;
	std::string toStringDescription() = 0;

protected:

	int m_lifePoint; // points of life
	int m_manaPoint; // points of Mana
	bool m_isAlive; // true if the character is alive 

	std::string toStringChatacterAttribute();

private:
	std::string m_name; //name of the character 
	int static nbOfPlayerCharacters; //number of player-controlled characters
	int m_playerIndex; //index of the player who control the character, -1 for AI


};

#endif // !CHARACTER



