#ifndef JUEGO_H
#define JUEGO_H

#include "nave.h"
#include "nave_enem.h"
#include "espacio.h"
#include "mediator.h"


class Juego:public objeto{
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
			
			p.ejecutar();
			a.ejecutar();
			
			Sleep(150);
			GameOver = p.get_estado();
		}
	}

public:
/*	Singleton*/
	static Juego& Instancia(){
		static Juego un;
		return un;
	}
	
	int juego_pun(){
		return a.get_pun();
	}
};


#endif
