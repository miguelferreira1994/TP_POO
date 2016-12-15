
#include "ecra.h"
#include <sstream>
#include <iostream>


ecra::ecra()
{
}


ecra::~ecra()
{

}

string ecra::pedeComando()
{
	string comando = "";
	cout << "Introduz Comando: ";
	getline(cin, comando);
	return comando;
}

string ecra::leComando()
{/*
	if (comando == "")
	{
		stringstream ss;
		string sub;
		ss >> sub;
		if (sub == " add perfil")
		{
			string << letra << id;
			ss >> letra >> ID;
		}
		for (int i = 0; i < Perfil.size(); i++)
			if (Perfil[i]->getletra() == letra)
				Perfil[i]->setBandeira();
			
	}
*/
	return string();
}
