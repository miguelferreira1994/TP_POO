#pragma once
#ifndef MAPA
#define MAPA
#include <vector>
#include "celula.h"
#include "Consola.h"
#include "fontes.h"
class Mapa {
	Celula ***novoMapa;
	int linhas, colunas;
	int disposicaoR, disposicaoC;
public:
	Mapa(int linhas, int colunas);
	~Mapa();
	int getLinhas();
	int getColunas();
	int getDisposicaoR();
	int getDisposicaoC();
	void imprime();
	void desenhaMapa(int x0, int y0, int x1, int y1, Consola & consola, vector<Fontes> fontes);
	Celula *getMapa();
	Celula *getZoom(int l, int c);

	void setDisposicaoR(int r);
	void setDisposicaoC(int c);
};





#endif // !MAPA
