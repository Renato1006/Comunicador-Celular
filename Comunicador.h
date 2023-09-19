#ifndef COMUNICADOR_H
#define COMUNICADOR_H
#include <string>

using namespace std;

class Comunicador {
	protected:
		int cod;
		string prestadora;
		double plano;

	public: //internamente, strings são constantes
		Comunicador(int, const string &, double);
		~Comunicador();
		
		void setCod(int);
		int getCod() const;
		void setPrestadora(const string &);
		string getPrestadora() const;
		void setPlano(double);
		double getPlano() const;
		
		
		virtual double calcTotal(double const) const;
		virtual void imprime() const;
};
#endif
