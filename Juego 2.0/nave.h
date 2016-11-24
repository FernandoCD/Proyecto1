#ifndef NAVE_H
#define NAVE_H

#include <vector>
#include "nave_base.h"

class Nave : public Nave_base {
private:
	int x, y, vidas;
	vector<Disparos *> d;
public:
	Nave(int x1, int y1);
	
	virtual void dibujar();
	virtual void mover();
	virtual void borrar();
	virtual void morir();
	virtual void disparar();
	virtual void colision(/*Enemigo &a*/);
	void dib_vid();
};

#endif
