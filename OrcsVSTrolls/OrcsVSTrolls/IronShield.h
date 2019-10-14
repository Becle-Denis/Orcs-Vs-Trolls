// Orc VS Trolls 
// Becle Denis C00254311
#ifndef IRONSHIELD
#define IRONSHIELD

#include "Shield.h"

/// <summary>
/// Basic Iron shield 
/// -2 on all Melee attack 
/// -1 on all magic attack 
/// 20 PV 
/// </summary>
class IronShield : public Shield
{
public:
	IronShield();
	~IronShield();

	//Overrided GameObject functions
	std::string toString() override;
	std::string toStringDescription() override;

protected:
	//Overrided Shield function
	int protect(int& meleeAttackPoint, int& magicAttackPoint, int directShieldDamage) override;


};

#endif // !IRONSHIELD




