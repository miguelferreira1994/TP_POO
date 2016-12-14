#include <vector>
#include <sstream>
#include <iostream>
#include "seres.h"
using namespace std;
Seres::Seres(const string & n)
{
	nome = n;
	id = conta++;
	vida = 100;
	colonia = nullptr;

}

Seres::Seres(const int & v)
{
	id = conta++;
	vida = v;
	colonia = nullptr;
	ataque = "";
	defesa = "";
}

Seres::Seres(const Seres & s)
{
	id = s.id;
	vida = s.vida;
	colonia= nullptr;
	ataque = s.ataque;
	defesa = s.defesa;
}

Seres::~Seres()
{

}

void Seres::SetHome(Colonias * c)
{
	colonia = c;
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

Colonias * Seres::getColonia()
{
	return colonia;
}
