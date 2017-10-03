#include "Oftalmo.h"
#include "Medico.h"
#include <string>
#include <iostream>

using namespace std;

Oftalmo:: Oftalmo(){
}

Oftalmo :: ~Oftalmo(){
}

Oftalmo :: Oftalmo(string nome, float peso, float altura){

	cout << nome << "   " << altura << " m  " << peso << " kg" << endl;
}

void Oftalmo :: nomeDoCurso(string profissao){
	cout << profissao << endl;
}

void Oftalmo :: cirurgia(){
	cout << "\nEsse medico nao faz cirurgia";
}

void Oftalmo :: atendimento(){
	cout << "\nEsse medico faz atendimento em pessoas com problemas oculares\n\n\n";
}
