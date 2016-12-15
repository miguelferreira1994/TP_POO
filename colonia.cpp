#include <sstream>
#include <iostream>
#include "colonia.h"

colonias::colonias() {

}

colonias::~colonias() {
	for (unsigned int i = 0; i < seres.size(); i++)
		delete seres[i];
	seres.clear();

	for (unsigned int j = 0; j < edificios.size(); j++)
		delete edificios[j];
	edificios.clear();
}

void colonias::cria_seres(Seres * s)
{

}

void colonias::restaura_edificios(int id)
{
	vector <Edificios * > copia = edificios;
	for (int i = 0; i < copia.size(); i++)
		copia[i]->repoeSaude();
}

void colonias::cria_edificios(Edificios * e)
{
	//if (e->getEdificio() == nullptr) {
	edificios.push_back(e);
	//	edificios[edificios.size() - 1]->SetEdificio(this);
	//}
	//else
	//cout << "O edificio já está criado noutra colonia\n";

}

void colonias::apaga_edificios(int id)
{
	for (unsigned int i = 0; i < edificios.size(); i++)
		if (edificios[i]->getID() == id)
		{
			//edificios[i]->SetEdificio(nullptr);
			edificios.erase(edificios.begin() + 1);
			break;
		}
}



void colonias::vende_edifcios(int m)
{

}

string colonias::toString()
{
	ostringstream os, as;
	for (unsigned int i = 0; i < seres.size(); i++)
		os << seres[i]->toString() << "\n";
	return os.str();

	//for (unsigned int j = 0; j < edificios.size(); j++)
	//	as << edificios[j]->toString() << "\n";
	// return as.str();

	// AQUI VAI RETORNAR DOIS ELEMENTOS? 
	// VERIFICAR

}






colonias & colonias::operator=(const colonias & c)
{
	if (this != &c) {
		for (unsigned int i = 0; i < seres.size(); i++)
			delete seres[i];
		seres.clear();

		for (auto s : c.seres)
		{
			Seres *clone = new Seres(*s);
			//clone->SetColonia(this);
			
			seres.push_back(clone);
		}
	}
	return *this;
	// TODO: insert return statement here
}

