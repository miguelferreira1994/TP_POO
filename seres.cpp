#include <vector>
#include <sstream>
#include <iostream>
#include "ser.h"
using namespace std;
Seres::Seres(const string & n)
{
	nome = n;
	id = conta++;
	vida = 100;
	
}

Seres::Seres(const int & v)
{
	id = conta++;
	vida = v;
	
	ataque = "";
	defesa = "";
}

Seres::Seres(const Seres & s)
{
	id = s.id;
	vida = s.vida;
	
	ataque = s.ataque;
	defesa = s.defesa;
}

Seres::~Seres()
{

}

string Seres::toString()
{
	ostringstream os;
	os << "ID: " << id << " Vida: " << vida << " Ataque: " << ataque << " Defesa: " << defesa;
	return os.str();
}

int Seres::getVida()
{
	return id;
}
