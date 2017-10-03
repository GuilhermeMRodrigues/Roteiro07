#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H

#include "Trabalhador.h"

using namespace std;

class TrabalhadorAssalariado : public Trabalhador{
public:
	void calcularPagamento(int);
	
	TrabalhadorAssalariado();
	~TrabalhadorAssalariado();



};
#endif
