#pragma once
#ifndef Seres
#define SERES
#include "Perfil.h"
using namespace std;

class Colonias;
class Seres {
	int id, vida;
	static int conta;
	string nome, ataque, defesa;
	Colonias * colonia;
public:
	Seres(const string &n);
	Seres(const int &v);
	Seres(const Seres &s);
	~Seres();

	void SetHome(Colonias *c);
	string toString();
	int getVida();
	Colonias * getColonia();
};
#endif // !Seres

