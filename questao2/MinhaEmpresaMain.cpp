#include "Funcionario.h"
#include "Consultor.h"
#include <iostream>
#include <string>

using namespace std;


int main(){

	Funcionario  *funcionarios[3];
	
	funcionarios[0] = new Consultor();
	Consultor("Guilherme", 123, 1700);
	funcionarios[0]->setSalario(1700);
	funcionarios[0]->getSalario();
	//funcionarios[0]->getSalario(20);
 
	funcionarios[1] = new Consultor();
	Consultor("Mazo", 307, 412);
	funcionarios[1]->setSalario(412);
	funcionarios[1]-> getSalario();


	funcionarios[2] = new Consultor();
	Consultor("Rebeca", 789, 1700);
	funcionarios-> setSalario(1700);
	funcionarios-> getSalario();
	
	





return 0;
}
