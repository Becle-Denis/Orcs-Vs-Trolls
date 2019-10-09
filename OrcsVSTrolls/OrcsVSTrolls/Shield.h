// Orc VS Trolls 
// Becle Denis C00254311
#ifndef SHIELD
#define SHIELD

#include "GameObject.h"

/// <summary>
/// Abstract class to define shields 
/// </summary>
class Shield : public GameObject {

public :

	Shield(int lifePoint);
	~Shield();
	/// <summary>
	/// protect the attack 
	/// return by reference
	/// </summary>
	/// <param name="meleeAttackPoint">initial MeleeAttackPoint, return final</param>
	/// <param name="magicAttackPoint">initial MagicAttackPoint, return final</param>
	/// <param name="directShieldDamage">damage to the shield</param>
	/// <returns>DamageToTheDefenders</returns>
	virtual int defend(int& meleeAttackPoint, int& magicAttackPoint, int directShieldDamage = 0);
	

	bool isWorking();
	void takeDamage(int damagePoint);
	virtual void gainLife(int lifePoint);

	//Overrided GameObject functions
	std::string toString() = 0;
	std::string toStringDescription() = 0 ;


protected : 
	bool m_destroyed;
	int m_livePoint;
	virtual int protect(int& meleeAttackPoint, int& magicAttackPoint, int directShieldDamage = 0) = 0;
};

#endif // !SHIELD



