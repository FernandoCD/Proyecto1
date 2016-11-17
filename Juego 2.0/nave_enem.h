#ifndef NAVE_ENEM_H
#define NAVE_ENEM_H

#include <iostream>
#include <windows.h>
#include <conio.h>
#include "nave_base.h"
using namespace std;

class Enemigo : public Nave_base{
private:
	int x, y, vidas_e;
public:
	Enemigo(int x1, int y1);
	
	virtual void dibujar();
	virtual void mover();
	virtual void borrar();
	virtual void morir();
	virtual void disparar();
};

#endif
