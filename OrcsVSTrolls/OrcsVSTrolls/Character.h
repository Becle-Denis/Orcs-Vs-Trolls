// Orc VS Trolls 
// Becle Denis C00254311
#ifndef CHARACTER
#define CHARACTER

#include <iostream>
#include "GameObject.h"

class Character : public gameObject {
public :
	virtual void attack(Character * defender) = 0;

protected:
	int m_playerIndex;
	int m_lifePoint;
	int m_manaPoint;
};

#endif // !CHARACTER



