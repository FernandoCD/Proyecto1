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
	Disparos c;
	int puntaje;
public:
	Enemigo();
	
	Disparos get_disp(){return c;}
	int get_y(){return y;}
	int get_x(){return x;}
	int get_pun(){return puntaje;}
	virtual void dibujar();
	virtual void mover();
	virtual void borrar();
	virtual void morir();
	virtual void disparar();
	void colsion_e(){
	}
};

#endif
