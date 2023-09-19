#ifndef MODEM_H // Empacotador
#define MODEM_H

#include <string>

#include "Comunicador.h"

using namespace std;

class Modem : public Comunicador{
	private:
		
		double Consumo;

	public: //internamente, strings são constantes
		Modem(int, double, const string &, double);
		~Modem();
		
		void setConsumo(double);
		double getConsumo() const;
		
		void imprime() const; //sobreposição
		
		friend class Celular;			
};
#endif
