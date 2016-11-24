#ifndef DISPAROS_H
#define DISPAROS_H

#include "objeto.h"

class Disparos : public objeto{
private:
	int x, y;
public:
	Disparos(const int x1, const int y1);
	
	int getx(){return x;}
	int gety(){return y;}
	void disp(int a);
};
#endif
