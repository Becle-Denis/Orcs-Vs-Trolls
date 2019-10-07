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
	/// <summary>
	/// protect the attack 
	/// return by reference
	/// </summary>
	/// <param name="meleeAttackPoint">initial MeleeAttackPoint, return final</param>
	/// <param name="magicAttackPoint">initial MagicAttackPoint, return final</param>
	/// <param name="directShieldDamage">damage to the shield</param>
	/// <returns>DamageToTheDefenders</returns>
	virtual int protect(int & meleeAttackPoint,int & magicAttackPoint, int directShieldDamage = 0) = 0;

	bool isWorking();
private : 
	bool destroyed;
	int livePoint;
	int meleeProtection;
	int magicProtection;
};

#endif // !SHIELD



