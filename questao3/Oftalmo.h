#ifndef OFTALMO_H
#define OFTALMO_H
#include "Medico.h"
#include <string>

using namespace std;

class Oftalmo : public Medico{

private:
public:

	Oftalmo();
	~Oftalmo();

	Oftalmo(string, float, float);
	void nomeDoCurso(string);
	void cirurgia();
	void atendimento();



};
#endif

