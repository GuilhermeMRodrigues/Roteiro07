#include "Ginecologista.h"
#include "Medico.h"
#include <string>
#include <iostream>

using namespace std;

Ginecologista :: Ginecologista(){
}

Ginecologista :: ~Ginecologista(){
}

Ginecologista :: Ginecologista(string nome, float peso, float altura){


	cout << nome << "   " <<  altura << " m  " << peso << " kg" << endl;
}


void Ginecologista :: nomeDoCurso(string curso){
	cout << curso << endl;
}

void Ginecologista :: cirurgia(){
	cout << "\nEsse medico nao faz cirurgia";
}

void Ginecologista :: atendimento(){
	cout << "\nEsse medico faz atendimento a mulheres\n\n\n";
}
