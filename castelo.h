#pragma once
#include "edificio.h"
#include "ser.h"

#include <vector>
class castelo: public Edificios
{
public:
	static int id;
	
	castelo();
	~castelo();
	//void criar_castelo();

	string toString();

};

