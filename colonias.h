#ifndef COLONIAS
#define COLONIAS
#include <vector>
#include "edificios.h"
#include "seres.h"
using namespace std;

class Colonias {
	int moedas = 0;
	vector <Edificios *> edificios;
	vector <Seres *> seres;
public:
	Colonias();
	~Colonias();

	void cria_seres(Seres *s);
	void cria_edificios(Edificios *e);
	void apaga_edificios(int id);
	void restaura_edificios(int id);
	void vende_edifcios(int m);
	string toString();
	Colonias &operator=(const Colonias &c);

	
};
#endif // !COLONIAS




