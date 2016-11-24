#ifndef NAVE_ENEM_H
#define NAVE_ENEM_H

#include <vector>
#include <stdlib.h>
#include "nave_base.h"

class Enemigo : public Nave_base{
private:
	int x, y, vidas_e;
	int POS_X;
	int POS_Y;
public:
	Enemigo();
	
	int get_X(){return POS_X;}
	int get_Y(){return POS_Y;}
	virtual void dibujar();
	virtual void mover();
	virtual void borrar();
	virtual void morir();
	virtual void disparar();
	virtual void colision(/*Enemigo &a*/);
};

#endif
