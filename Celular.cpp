#include <iostream>
#include <string>
using namespace std;

#include "Comunicador.h"
#include "Celular.h"
#include "Modem.h"

	Celular::Celular(int cod, const string &pres, double plan, const string &prop, int ddd, int num, int sms, double liga):Comunicador(cod, pres, plan)
	{ 	setProprietario(prop);
		setDDD(ddd);
		setNum(num);
		setSms(sms);
		setLigacoes(liga);
	}

	Celular::~Celular() { }

	void Celular::setProprietario(const string &prop) { proprietario=prop; }
	string Celular::getProprietario() const { return proprietario; }

	void Celular::setDDD(int ddd){ DDD = ddd;}
	int Celular::getDDD() const { return DDD; }

	void Celular::setNum(int num){ Num = num;}
	int Celular::getNum() const { return Num; }

	void Celular::setSms(int sms){ Sms = sms;}
	int Celular::getSms() const { return Sms; }

	void Celular::setLigacoes(double liga){ ligacoes=liga;}
	double Celular::getLigacoes() const { return ligacoes;}

	double Celular::calcTotal(double const extra) const
	{ 	return ((plano + extra) + 1.75*Sms + ligacoes);
	}
	
	double Celular::calcTotal(double const extra, Modem m) const
	{ 	return ((plano + extra) + 1.75*Sms + ligacoes + m.getConsumo() * m.plano);
	}

	void Celular::imprime() const
	{ 	Comunicador::imprime();
	
		cout << "Proprietário: " << proprietario
		     << "\nNúmero : " << DDD << " - " << Num 
		     << "\nTotal de SMS enviados: " << Sms 
		     << "\nValor das ligações: " << ligacoes 
		     << "\nValor total: " << calcTotal(100)
		     << endl;	     
	}
	
