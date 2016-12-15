#pragma once
#ifndef EDIFICIO
#define EDIFICIO
#include <string>

using namespace std;

class Edificios {
	int id, estado_edif;
	static int conta;
	string tipo;
	

public:
	Edificios(const string & t, const int &e);
	Edificios(Edificios & t);
	int getEstado(int est);
	~Edificios();
	Edificios();
	string toString();
	void repoeSaude();
	const int getID();
//	void SetEdificio(Colonias *c);
//	Colonias *getEdificio();
};
#endif // EDIFICIOS

