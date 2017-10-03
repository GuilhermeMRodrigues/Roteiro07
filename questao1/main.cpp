#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"
#include <iostream>


using namespace std;

int main(){

	FiguraGeometrica *figuras[3];

	figuras[0] = new Triangulo();
	figuras[1] = new Circulo();
	figuras[2] = new Quadrado();
	
	figuras[0]->calculaArea();
	figuras[1]->calculaArea();
	figuras[2]->calculaArea();
 


return 0;
}
