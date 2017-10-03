#include "Triangulo.h"
#include "FiguraGeometrica.h"
#include <iostream>

using namespace std;
	
Triangulo::Triangulo(){
	
}

Triangulo::~Triangulo(){

}
	
	float Triangulo::calculaArea(){
	
	float base, altura;

	cout <<"Digite a base e a altura do triangulo para calcular a area"<<endl;
	cin >> base >> altura;
	
	cout <<"A area do triangulo eh : " << (base*altura)/2 << endl;

	}
