#ifndef NAVE_BASE_H
#define NAVE_BASE_H

#include "objeto.h"
#include "disparos.h"

class Nave_base : public objeto {
public:
	virtual void dibujar() = 0;
	virtual void mover() = 0;
	virtual void borrar() = 0;
	virtual void morir() = 0;
	virtual void disparar() = 0;
};

#endif
