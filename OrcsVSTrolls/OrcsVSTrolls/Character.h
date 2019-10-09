// Orc VS Trolls 
// Becle Denis C00254311
#ifndef CHARACTER
#define CHARACTER

#include <iostream>
#include "GameObject.h"
#include "Shield.h"
#include "Attack.h"
#include <vector>



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
	/// <param name="ptr_defender">Defender</param>
	/// <param name="ptr_attack">Attack</param>
	void attackCharacter(Character* ptr_defender, Attack* ptr_attack);

	//pure virtual function
	virtual std::string getType() = 0;

	// Getters 
	std::string getName() const;
	int getLifePoint();
	int getManaPoint();
	int getIndexPlayer();
	bool isAlive();
	virtual Shield* getSelectedShieldPtr();
	virtual int getBonusMalusMeleeAttack();
	virtual int getBonusMalusMagicAttack();


	// modifier
	void takeDamage(int damagePoint);
	void gainHealth(int healthPoint);
	virtual bool spendMana(int manaPoint);
	virtual void gainMana(int manaPoint);

	//Actions 
	void playTurn(std::vector<Character*> PlayersPtr);

	//Overrided GameObject functions
	std::string toString();
	std::string toStringDescription();


protected:

	int m_playerIndex; //index of the player who control the character, -1 for AI
	int m_lifePoint; // points of life
	int m_manaPoint; // points of Mana
	bool m_isAlive; // true if the character is alive 

	std::vector<Attack*> m_attacks;
	std::vector<Shield*> m_shields;

	
	virtual void endOfTurn();

private:
	std::string m_name; //name of the character 
	int static nbOfPlayerCharacters; //number of player-controlled characters
	std::string toStringChatacterAttribute();


};

#endif // !CHARACTER



