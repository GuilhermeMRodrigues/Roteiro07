#include "Trabalhador.h"
#include "TrabalhadorHora.h"
#include "TrabalhadorAssalariado.h"
#include <iostream>
#include <string>

using namespace std;

int main(){

	Trabalhador *trabalhadores[2];

	trabalhadores[0] = new Trabalhador("chico");
	trabalhadores[0] = new TrabalhadorHora();
	trabalhadores[0] -> calcularPagamento(34);


	trabalhadores[1] = new Trabalhador("maria");
	trabalhadores[1] = new TrabalhadorAssalariado();
	trabalhadores[1] -> calcularPagamento(90);



return 0;
}
