#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

using namespace std;

class FiguraGeometrica{
protected:
	string nome;
	int area;
public:
	FiguraGeometrica(string nome, int area);
	
	string getNome();
	int getArea();

	void setNome(string nome);
	void setArea(int area);	
	
	void calculaArea();
	


};
#endif
