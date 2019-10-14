// Orc VS Trolls 
// Becle Denis C00254311
#ifndef HALFMAGICSHIELD
#define HALFMAGICSHIELD

#include "Shield.h"

/// <summary>
/// -3 on all attacks 
/// success 70% 
/// end of defense +2 PV : success 50% 
/// 8PV 
/// </summary>
class HalfMagicShield : public Shield
{
public:
	HalfMagicShield();
	~HalfMagicShield();

	//Overrided Shield Functions
	void gainLife(int LifePoint) override;

	//Overrided GameObject functions
	std::string toString() override;
	std::string toStringDescription() override;

protected:
	//Overrided Shield function
	int protect(int& meleeAttackPoint, int& magicAttackPoint, int directShieldDamage) override;
};

#endif // !HALFMAGICSHIELD




