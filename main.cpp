#include <iostream>
using namespace std;
#include "Comunicador.h"
#include "Celular.h"

double diminuiLigacoes(Celular c) { return c.ligacoes*0.9;}

int main()
{ 	Comunicador vcom(350, "Vivo", 300);
	Celular vcel(268, "Tim", 300, "Pedro", 24, 933335555,38,38.7);
	Modem vmod(248,100,"Claro",5.8);
	
	//cria um ponteiro para a superclasse e o inicializa
	Comunicador *vcp = 0;
	
	//cria um ponteiro para a subclasse
	Celular *vsp = 0;
	
	cout <<"Vinculacao Estatica:\n";
	vcom.imprime(); //gera a saída utilizando vinculação estática
	vcel.imprime(); //gera saída usando vinculação estática
	cout << "\nSe diminuir as ligaçãoes em 10%, o valor fica: " << diminuiLigacoes(vcel); //Método friend
	
	vmod.imprime();
	cout << "\nValor do celular com o modem: " << vcel.calcTotal(100,vmod) << endl; //Acesssando um método de uma classe friend
	
	cout <<"\n---------------------------------------";
	cout <<"\nVinculacao Dinamica:\n";

	//aponta o ponteiro da superclasse para o objeto da superclasse
	//(aponta para o endereço de vcom)
	vcp = &vcom;
	vcp->imprime(); //gera a saida utilizando vinculação dinamica
	//aponta o ponteiro da subclasse para o objeto da subclasse
	vsp = &vcel;
	vsp->imprime();
	
	cout<<"---------------------------------------";
	cout<<"\nPolimorfismo:\n";
	//aponta o ponteiro da superclasse para o objeto da subclasse
	vcp = &vcel;
	vcp->imprime(); //polimorfismo: chama imprime() da subclasse
}
