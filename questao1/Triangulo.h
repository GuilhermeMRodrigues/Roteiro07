#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"

using namespace std;

class Triangulo : public FiguraGeometrica{

public:
	Triangulo();
	virtual ~Triangulo();

	float calculaArea();	


};
#endif
