#include "Trabalhador.h"
#include "TrabalhadorHora.h"
#include <iostream>
#include <string>

using namespace std;

TrabalhadorHora::TrabalhadorHora(){

}

TrabalhadorHora::~TrabalhadorHora(){

}

void TrabalhadorHora::calcularPagamento(int horas){
	float pag;

	cout <<"Qual eh o pagamento por hora?" << endl;
	cin >> pag;
	
	pag *= horas;

	if(horas > 40){
	
	pag *= (20+(horas/2));
	
		
	}

	cout << "\n O valor do salario por "<< horas << "horas de jornada eh R$" << pag << endl;
}
