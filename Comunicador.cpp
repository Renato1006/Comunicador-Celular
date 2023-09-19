#include <iostream>
#include <string>
using namespace std;

#include "Comunicador.h"

	Comunicador::Comunicador(int c, const string &p, double v)
	{
		setCod(c);
		prestadora = p;
		//constantes podem ser atribuidas diretamente
		setPlano(v);
		
	}
	Comunicador::~Comunicador() { }
	
	void Comunicador::setCod(int c){cod = c;}
	int Comunicador::getCod() const { return cod; }
	
	void Comunicador::setPrestadora(const string &p) { prestadora=p; }
	string Comunicador::getPrestadora() const { return prestadora; }
	
	void Comunicador::setPlano(double v)
	{	plano = (v < 0.0) ? 0.0 : v;
	}
	double Comunicador::getPlano() const { return plano; }

	double Comunicador::calcTotal(double const extra) const
	{	return (plano + extra);
	}
	
	void Comunicador::imprime() const
	{ 	cout << "\nCódigo: " << cod
		     << "\nNome da prestadora: " << prestadora
		     << "\nValor do plano: " << plano 
		     << "\nValor total: " << calcTotal(100)
		     << endl;
	}
