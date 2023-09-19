#include <iostream>
#include <string>
using namespace std;

#include "Comunicador.h"
#include "Modem.h"

	Modem::Modem(int c, double consumo, const string &p, double v):Comunicador(c, p, v)
	{
		setConsumo(consumo);	
	}
	Modem::~Modem() { }
	
	void Modem::setConsumo(double consumo) {Consumo = consumo;}
	double Modem::getConsumo() const { return Consumo; }
	
	void Modem::imprime() const
	{ 	cout << "\nModem: " << endl;
		Comunicador::imprime();
	
		cout << "Consumo de internet: " << Consumo
		     << endl;	     
	}
