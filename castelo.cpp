#include "castelo.h"
#include <iostream>
#include <string>
#include <sstream>

int castelo::id = 0;

castelo::castelo()
{

}


castelo::~castelo()
{
}

string castelo::toString()
{
	ostringstream os;

	os << Edificios::toString() << " Castelo";

	return os.str();
}
