#include "mapa.h"

Mapa::Mapa(int linhas, int colunas)
{

}

int Mapa::getLinhas()
{
	return linhas;
}

int Mapa::getColunas()
{
	return colunas;
}

int Mapa::getDisposicaoR()
{
	return disposicaoR;
}

int Mapa::getDisposicaoC()
{
	return disposicaoC;
}

void Mapa::imprime()
{

}

void Mapa::desenhaMapa(int x0, int y0, int x1, int y1, Consola & consola, vector<Fontes> fontes)
{

}

Celula * Mapa::getMapa()
{
	return novoMapa[0][0];
}

Celula * Mapa::getZoom(int linha, int col)
{
	for (int l = 0; l < linhas; l++)
	{
		for(int c = 0; c< colunas; c++)
			if (l == linha && c == col)
			{
				return novoMapa[l][c];
			}
	}
	return novoMapa[0][0];
}

void Mapa::setDisposicaoR(int r)
{
	disposicaoR = r;
}

void Mapa::setDisposicaoC(int c)
{
	disposicaoC = c;
}
