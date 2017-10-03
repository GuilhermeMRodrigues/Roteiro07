#include "Cirurgiao.h"
#include "Medico.h"
#include <string>
#include <iostream>

using namespace std;

Cirurgiao :: Cirurgiao(){
}

Cirurgiao :: ~Cirurgiao(){
}

Cirurgiao :: Cirurgiao(string nome, float peso, float altura){

	cout << nome << "   " <<  altura << "m  " << peso << "kg " << endl;
}

void Cirurgiao :: nomeDoCurso(string profissao){
	cout << profissao << endl;
}

void Cirurgiao :: cirurgia(){
	cout << "\nEsse medico é apto a relaizar cirurgias";
}

void Cirurgiao :: atendimento(){
	cout << "\nEsse medico nao faz atendimento\n\n\n";
}
