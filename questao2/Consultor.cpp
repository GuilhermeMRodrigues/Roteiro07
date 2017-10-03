#include "Consultor.h"
#include "Funcionario.h"
#include <iostream>
#include <string>

using namespace std;


Consultor::Consultor(){

}

Consultor::~Consultor(){


}

	float Consultor::getSalario(){
		cout << "Seu salario com 10% de acrescimo fica: " << salario*1.1 << endl;
	return salario*1.1;
		
	}
	
	float Consultor::getSalario(float percentual){
		salario = (salario*percentual*0.01) + salario;
	
	cout<<"Seu salario acrescido de " << percentual << "% eh: " << endl;
		return salario;
	
	}

	Consultor::Consultor(string n, int m, float s){
	cout << n << "\nMatricula: " << m << "\nSalario "<< s << endl;

}
