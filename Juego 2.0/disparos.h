#ifndef DISPAROS_H
#define DISPAROS_H

#include "objeto.h"

class Disparos : public objeto{
private:
	int x, y;
public:
	Disparos();
	Disparos(const int x1, const int y1);
	
	int getx(){ return x;}
	int gety(){ return y;}
	void modx(int x_1){ x = x_1;}
	void mody(int y_1){ y = y_1;}
	void disp(int a);
};
#endif
