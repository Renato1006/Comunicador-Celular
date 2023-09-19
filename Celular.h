#ifndef CELULAR_H
#define CELULAR_H
#include <string>

using namespace std;

#include "Comunicador.h"
#include "Modem.h"

class Celular: public Comunicador
{ 	private:
		string proprietario;
		int DDD;
		int Num;
		int Sms;
		double ligacoes;
	public:
		Celular(int, const string &, double, const string &, int, int, int, double);
		~Celular();
		
		void setProprietario(const string &);
		string getProprietario() const;
		void setDDD(int);
		int getDDD() const;
		void setNum(int);
		int getNum() const;
		void setSms(int);
		int getSms() const;
		void setLigacoes(double);
		double getLigacoes() const;
		
		double calcTotal(double const) const; //sobreposição
		
		double calcTotal(double const, Modem)const; //sobreposição
		
		void imprime() const; //sobreposição
		
		friend double diminuiLigacoes(Celular);
};
#endif
