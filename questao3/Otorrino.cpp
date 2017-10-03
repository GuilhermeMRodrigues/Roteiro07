#include "Otorrino.h"
#include "Medico.h"
#include <string>
#include <iostream>

using namespace std;

Otorrino :: Otorrino(){
}

Otorrino :: ~Otorrino(){
}

Otorrino :: Otorrino(string nome, float altura, float peso){

	cout << nome << "   " <<  altura << " m  " << peso << "  kg" << endl;
}

void Otorrino :: nomeDoCurso(string profissao){
	cout << profissao << endl;
}

void Otorrino :: cirurgia(){
	cout << "\nEsse medico faz cirurgia";
}

void Otorrino :: atendimento(){
	cout << "\nEsse medico faz atendimento \n\n\n";
}
