#ifndef JUEGO_H
#define JUEGO_H

#include "nave.h"
#include "nave_enem.h"
#include "espacio.h"
#include "mediator.h"


class Juego{
private:
	Nave p;
	Enemigo a;
	Espacio s;
	Mediator m;
public:
	Juego(){
		p.dibujar();
		
		bool GameOver = p.get_estado();
		while(!GameOver){
			s.cons(p);
			m.colision(p, a);
			
			p.disparar();
			p.mover();
			
			a.disparar();
			a.mover();
			
			Sleep(150);
			GameOver = p.get_estado();
		}
	}
	
	int juego_pun(){
		return a.get_pun();
	}
};


#endif
