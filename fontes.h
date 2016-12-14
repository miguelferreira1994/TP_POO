#pragma once
#ifndef FONTES
#define FONTES
#include <iostream>
#include <sstream>

using namespace std;
class Fontes {
	string id, tipo;
	int quantidade, x, y;
public:
	static int contador;
	Fontes(string t, int q, int x, int y);
	void setID(string id);
	void setQuantidade(int q);
	int getQuantidade() const;
	int getX();
	int getY();
	string getTipo();
	string getID();
	string getConteudo();
};


#endif // !FONTES
