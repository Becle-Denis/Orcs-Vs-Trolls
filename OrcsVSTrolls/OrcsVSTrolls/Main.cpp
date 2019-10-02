// Orc VS Trolls 
// Becle Denis C00254311

#include <iostream>
#include <string>
#include "Character.h"
#include "Orc.h"
#include "Troll.h"
#include "Attack.h"


//Testing 
class Test1 : public GameObject
{
public:
	Test1()
	{
		name = "Nom";
	}

	Test1(std::string name)
	{
		this->name = name;
	}

	std::string toString()
	{
		return "Test 1 " + name;
	}

	std::string toStringDescription()
	{
		return toString() + "\nDescription L1\nDescription L2\nDescription L3";
	}

private:
	std::string name;
};

class Test2 : public GameObject
{
public:
	Test2()
	{
		name = "Nom";
		pv = 15;
	}
	Test2(std::string name, int pv)
	{
		this->name = name;
		this->pv = pv;
	}

	std::string toString()
	{
		return "Test 2 " + name;
	}

	std::string toStringDescription()
	{
		return toString() + "\nPoints de vie = " + std::to_string(pv) + "\nDescription L2\nDescription L3";
	}

private:
	std::string name;
	int pv;
};

int main(void)
{
	Test2 objetTest1("WAZZA", 35);
	Test2 objetTest2("SALUT", 45);
	Test2 objetTest3("CA ROULE?", 10);

	GameObject* arr[3] = { &objetTest1,&objetTest2,&objetTest3 };

	GameObject* test = GameObject::userChoice(arr, 3);

	std::cout << "RESULTTTTT\n";
	system("PAUSE");
	std::cout << test->toString() << std::endl;
}