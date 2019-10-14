#include "IceBall.h"
#include <ctime>
#include <vector>
#include "Interface.h"

IceBall::IceBall() : Spell(5,false)
{

}

IceBall::~IceBall()
{

}

void IceBall::doSpell(Character* attacker, Character* attacked, Shield* shield, int magicBonusMalus)
{
	srand(static_cast<unsigned int>(time(0)));

	if (rand() % 100 > 10)
	{
		std::vector<Character*> characters;
		//success
		Interface::display(this->toString() + " thrown");
		Interface::display("Bonus tour 1 for " + attacker->toString());
		attacker->playTurn(characters);
		Interface::display("Bonus tour 2 for " + attacker->toString());
		attacker ->playTurn(characters);
		Interface::display("End of Bonus tours for " + attacker->toString());
	}
	else {
		//fail
		Interface::display(this->toString() + " failed");
	}
}

std::string IceBall::toString()
{
	return "SPELL IceBall";
}

std::string IceBall::toStringDescription()
{
	return toString() + "\nCost : 5\nFreeze all the other characters\n2 Bonus tour for the attacter\nThe attacker cannot attack a Freezed player during these tour\nLow Chance to fail";
}

