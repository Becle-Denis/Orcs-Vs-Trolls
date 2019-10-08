// Orc VS Trolls 
// Becle Denis C00254311
#ifndef GAMEOBJECT
#define GAMEOBJECT

#include <iostream>

class GameObject
{
public:
	virtual std::string toString() = 0;
	virtual std::string toStringDescription() = 0;

};


#endif // !GAMEOBJECT