#ifndef NAVE_H
#define NAVE_H

#include <list>
#include "nave_base.h"

class Nave : public Nave_base {
private:
	int x, y, vidas;
	list<Disparos *> d;
	bool GameOver_1;
public:
	Nave(int x1, int y1);
	
	bool get_estado(){return GameOver_1;}
	int get_y1(){return y;}
	int get_x1(){return x;}
	list<Disparos *> get_vec(){return d;}
	virtual void dibujar();
	virtual void mover();
	virtual void borrar();
	virtual void morir();
	virtual void disparar();
	void dib_vid();
};

#endif
