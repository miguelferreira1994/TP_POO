#include <vector>
#include "edificio.h"
#include "ser.h"
#include <sstream>
#include <iostream>

#ifndef COLONIA
#define COLONIA

using namespace std;

class colonias {
	int moedas = 0;
	vector <Edificios *> edificios;
	vector <Seres *> seres;
	Edificios * ptr_castelo;
public:
	colonias();
	~colonias();

	void cria_seres(Seres *s);
	void cria_edificios(Edificios *e);
	void apaga_edificios(int id);
	void restaura_edificios(int id);
	void vende_edifcios(int m);

	string toString();

	colonias &operator=(const colonias &c);


};
#endif // !COLONIA







