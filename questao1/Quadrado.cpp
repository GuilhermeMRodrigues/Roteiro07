#include "Quadrado.h"
#include "FiguraGeometrica.h"

#include <iostream>

using namespace std;

Quadrado::Quadrado(){

}

Quadrado::~Quadrado(){

}

	float Quadrado::calculaArea(){
	
	float lado;

	cout <<"Digite o lado do quadrado para calular a sua area"<<endl;
	cin >> lado;

	cout <<"O valor da area do quadrado eh: "<< lado*lado << endl;

	}
