#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "colonia.h"
#include "GameEngine.h"
#include "ecra.h"

using namespace std;

ostream & operator<<(ostream &o, const colonias &c) {
	// o << c.toString();
	return o;
}

int Edificios::conta = 0;
int Seres::conta = 0;




int main()
{
	GameEngine ge;
	ecra ec;
	bool sair = false;
	while (!sair) {
		system("cls");
		sair = ge.Comando(ec.pedeComando());
	}


	cout << "-- CASTLE WAR  --";
}