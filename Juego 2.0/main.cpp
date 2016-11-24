#include "nave.h"
#include "nave_enem.h"
#include "espacio.h"

	
int main() {
	
	bool GameOver = false;
	
	Enemigo a;
	Enemigo b;
	
	Nave p(20, 34);
	Espacio s;
	
	p.dibujar();
	
	while(!GameOver){
		
/*		s.cons();*/
		
		p.disparar();
		p.mover();
		p.dib_vid();
		
		a.disparar();
		a.mover();
		
		Sleep(180);
	}
	
	return 0;
}

