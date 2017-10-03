#include "Circulo.h"
#include "FiguraGeometrica.h"
#include <iostream>

using namespace std;

Circulo::Circulo(){

}

Circulo::~Circulo(){

}

float Circulo::calculaArea(){
	
	float raio;

	cout <<"Digite o raio do circulo para que sua area seja calculada"<< endl;
	cin >> raio;

	cout << "A area do circulo eh: " << 3.14*raio*raio << endl;



}

