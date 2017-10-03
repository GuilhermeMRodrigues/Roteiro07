#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

using namespace std;

class FiguraGeometrica{
private:
	string nome;
public:
	FiguraGeometrica();
	
	virtual~FiguraGeometrica();
	virtual float calculaArea();


};
#endif
