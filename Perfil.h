#include "colonia.h"

class Perfil : public Seres
{
private:
	char letra;
	bool bandeira, superior, peledura, armadura, faca, espada, buildseeker;
	bool agressao, ecologico, heatseeker, walker, remedio, secondchance;
	int forca, custoMone;
	//int saude,defesa,ataque,cont;
public:
	void addBandeira() { 
		this->bandeira = true;
		custoMone++;
	}
	void addSuperior() {
		this->superior = true;
		custoMone++;
		forca++;
		//saude++;
	}
	void addPeleDura() {
		this->peledura = true;
		custoMone=custoMone+2;
		forca = forca + 2;
		//defesa++;
	}
	void addArmadura() {
		this->armadura = true;
		custoMone=custoMone+2;
		forca = forca + 3;
		//defesa=defesa+2;
	}
	void addFaca() {
		this->faca = true;
		custoMone++;
		forca++;
		//ataque++;
	}
	void addEspada() {
		this->espada = true;
		custoMone = custoMone + 2;
		forca = forca + 2;
		/*
		if(cont=1 || cont=2){
			ataque=ataque+3;
		}else
			ataque=ataque+2;
		*/
	}
	void addAgressao() {
		this->agressao = true;
		custoMone++;
		forca++;
	}
	void addEcologico() {
		this->ecologico = true;
		custoMone++;
		forca++;
	}
	void addHeatSeeker() {
		this->heatseeker = true;
		custoMone++;
		forca++;
	}
	void addBuildSeeker() {
		this->buildseeker = true;
		custoMone++;
		forca++;
	}
	void addWalker() {
		this->walker = true;
		custoMone++;
		forca++;
	}
	void addRemedio() {
		this->remedio = true;
		custoMone=custoMone+2;
		forca++;
	}
	void addSecondChance() {
		this->secondchance = true;
		custoMone=custoMone+3;
	}

	void addCaracteristica(int ID) {
		if (ID==1){
			this->addBandeira();
		}
		else if (ID == 2){
			this->addSuperior();
		}
		else if (ID == 3){
			this->addPeleDura();
		}
		else if (ID == 4) {
			this->addArmadura();
		}
		else if (ID == 5) {
			this->addFaca();
		}
		else if (ID == 6) {
			this->addEspada();
		}
		else if (ID == 7) {
			this->addAgressao();
		}
		else if (ID == 8) {
			this->addEcologico();
		}
		else if (ID == 9) {
			this->addHeatSeeker();
		}
		else if (ID == 10) {
			this->addBuildSeeker();
		}
		else if (ID == 11) {
			this->addWalker();
		}
		else if (ID == 12) {
			this->addRemedio();
		}
		else if (ID == 13) {
			this->addSecondChance();
		}
	}
	char getLetra() 
	{
		return letra;
	}
};


