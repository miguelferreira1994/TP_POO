#pragma once

#ifndef Ser
#define SER
using namespace std;


class Seres {
	int id, vida;
	static int conta;
	string nome, ataque, defesa;
	
public:
	Seres(const string &n);
	Seres(const int &v);
	Seres(const Seres &s);
	~Seres();

	string toString();
	int getVida();

};
#endif // !Ser

