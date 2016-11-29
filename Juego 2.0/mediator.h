#ifndef MEMENTO_H
#define MEMENTO_H

#include "nave.h"
#include "nave_enem.h"

class Mediator:public objeto{
public:
	void colision(Nave &f, Enemigo &f1){
		list<Disparos *> a = f.get_vec();
		list<Disparos *>::iterator it_1;
		for(it_1 = a.begin(); it_1 != a.end(); it_1++){
			if(((*it_1) -> getx() == f1.get_x()+1 && 
				(*it_1) -> gety() == f1.get_y()) ||
				((*it_1) -> getx() == f1.get_x()+1 && 
				(*it_1) -> gety() == f1.get_y()-1)){
				
				f1.morir();
			}
		}
		
		Disparos a_1 = f1.get_disp();
		if((a_1.getx() == f.get_x1()+1 && a_1.gety() == f.get_y1()) ||
			(a_1.getx() == f.get_x1()+1 && a_1.gety() == f.get_y1()-1)){
			
			f.morir();
		}
	}
};

#endif
