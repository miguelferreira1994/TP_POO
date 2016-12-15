#include <sstream>
#include <iostream>

#include "edificio.h"


Edificios::Edificios(const string & t, const int &e)
{
	tipo = t;
	id = conta++;
	estado_edif = e;
	//nome_colonia = nullptr;
}

Edificios::Edificios(Edificios & t)
{
	//tipo = t;
	id = conta++;
	estado_edif = 100;
	//nome_colonia = nullptr;
}

int Edificios::getEstado(int est)
{
	return estado_edif;
}

Edificios::~Edificios()
{

}

Edificios::Edificios()
{
}


string Edificios::toString()
{
	ostringstream os;
	os << "ID: " << id << "Estado: " << estado_edif << "Tipo: " << tipo;
	return os.str();
}

void Edificios::repoeSaude()
{
	this->estado_edif = 100;
}



const int Edificios::getID()
{
	return id;
}
/*
void Edificios::SetEdificio(Colonias * c)
{
	nome_colonia = c;
}

Colonias * Edificios::getEdificio()
{
	return nome_colonia;
}
*/