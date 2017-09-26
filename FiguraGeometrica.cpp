#include <iostream>
#include "FiguraGeometrica.h"

FiguraGeometrica::Figura(string nome, int area){
	
	this->nome = nome;
	this->area = area;

}

	string Figura::getNome(){
		return nome;
	}
	
	void Figura::setNome(string nome){	
		this->nome = nome;
	}
	
	int Figura::getArea(){
		return area;	
	}
	
	void Figura::setArea(int area){
		this-> area = area;	
	}

	void Figura::calculaArea();



