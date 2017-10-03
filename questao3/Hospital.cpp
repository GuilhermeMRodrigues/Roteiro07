#include "Medico.h"
#include "Ginecologista.h"
#include "Cirurgiao.h"
#include "Oftalmo.h"
#include "Otorrino.h"

#include <iostream>
#include <string>

using namespace std;

int main(){

Medico *medicos[4];

cout << "MEDICOS DISPONIVEIS" << endl;

medicos[0] = new Ginecologista();
medicos[0] -> nomeDoCurso("Ginecologista");
Ginecologista("Luiz Inacio Lula da Silva", 79, 1.79);
medicos[0] ->cirurgia();
medicos[0] ->atendimento();


medicos[1] = new Cirurgiao();
medicos[1] -> nomeDoCurso("Cirurgiao"); 
Cirurgiao("Aecio Neves", 69, 1.69);
medicos[1] ->cirurgia();
medicos[1] ->atendimento();


medicos[2] = new Oftalmo();
medicos[2] -> nomeDoCurso("Oftalmologista");
Oftalmo("Dilma Rousself", 73, 1.74);
medicos[2] ->cirurgia();
medicos[2] ->atendimento();


medicos[3] = new Otorrino();
medicos[3] -> nomeDoCurso("Otorrino");
Otorrino("Marina Silva", 69, 1.50);
medicos[3] ->cirurgia();
medicos[3] ->atendimento();



}
