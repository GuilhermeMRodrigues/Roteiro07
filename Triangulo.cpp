#include "Triangulo.h"
#include <iostream>

using namespace std;
	
Triangulo::Triangulo(string nome, int area){
	this-> nome = nome;
	this-> area = area;
}

	int Triangulo::getB(){
		return b;	
	}
	int Triangulo::getH(){
		return h;
	}

	void Triangulo::setB(int b){
		this->b = b;
	}
	void Triangulo::setH(int h){
		this->h = h;
	}
	
	void Triangulo::calculaArea(int b, int h, int area){
		area = (b*h)/2;
	}
	void Triangulo::toString(int area){
		cout << area << endl;	
	}
