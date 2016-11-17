#ifndef NAVE_H
#define NAVE_H

#include <iostream>
#include <windows.h>
#include <conio.h>
#include "nave_base.h"
using namespace std;

class Nave : public Nave_base{
private:
	int x, y, vidas;
public:
	Nave(int x1, int y1);
	
	virtual void dibujar();
	virtual void mover();
	virtual void borrar();
	virtual void morir();
	virtual void disparar();
	void dib_cora();
};

#endif
