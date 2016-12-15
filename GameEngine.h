#pragma once
#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;
	
class GameEngine
{

public:

	bool Comando(string comando) {

		if (comando == "dim") {
			cout << "DOra";
			return true;
		}
		if (comando == "oponentes") {

		}
		if (comando == "castelo") {

		}
		if (comando == "mkperfil") {

		}
		if (comando == "addperfil") {

		}
		if (comando == "subperfil") {

		}
		if (comando == "rmperfil") {

		}
		if (comando == "load") {

		}
		if (comando == "inicio") {

		}
		return false;
	}
};

