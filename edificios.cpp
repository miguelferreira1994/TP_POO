#include <sstream>
#include <iostream>
#include "colonias.h"
#include "edificios.h"


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

string Edificios::toString()
{
	ostringstream os;
	os << "ID: " << id << "Estado: " << estado_edif << "Tipo: " << tipo;
	return os.str();
}

void Edificios::restaura_edificios(int id)
{
	vector <Edificios * > copia = edificios;
	for (int i = 0; i < copia.size(); i++)
		copia[i]->restaura_edificios(id);
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