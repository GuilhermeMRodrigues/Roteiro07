#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#include <string>

using namespace std;

class Trabalhador{

protected:
	string nome;
	float salario;
public:
	Trabalhador();
	~Trabalhador();

	Trabalhador(string);
	virtual void calcularPagamento(int);


};
#endif
