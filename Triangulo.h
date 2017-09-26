#ifndef "TRIANGULO_H"
#define TRIANGULO_H
#include "FiguraGeometrica.h"

using namespace std;

class Triangulo : public FiguraGeometrica{
protected:
	int b, h;
public:
	Triangulo(string nome, int area);
	
	int getB();
	int getH();
	

	
	void setB(int b);
	void setH(int h);

	void CalculaArea();
	void toString();


}
#endif
