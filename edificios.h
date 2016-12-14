#pragma once
#ifndef EDIFICIOS
#define EDIFICIOS
#include "colonias.h"
using namespace std;

class Edificios { // public Colonias {
	int id, estado_edif;
	static int conta;
	string tipo;
	vector <Edificios *> edificios;
//	Colonias * nome_colonia;
public:
	Edificios(const string & t, const int &e);
	Edificios(Edificios & t);
	int getEstado(int est);
	~Edificios();
	string toString();
	void restaura_edificios(int id);
	const int getID();
//	void SetEdificio(Colonias *c);
//	Colonias *getEdificio();
};
#endif // EDIFICIOS

