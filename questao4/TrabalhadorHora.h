#ifndef TRABALHADORHORA_H
#define TRABALHADORHORA_H

#include "Trabalhador.h"
#include <string>

using namespace std;

class TrabalhadorHora : public Trabalhador{
public:

	void calcularPagamento(int);
	
	TrabalhadorHora();
	~TrabalhadorHora();



};
#endif

