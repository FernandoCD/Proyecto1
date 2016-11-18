#include "nave.h"
#include "nave_enem.h"
#include "espacio.h"
#include <vector>

void cursor(){
	HANDLE hd;
	hd = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO c;
	c.bVisible = FALSE;
	SetConsoleCursorInfo(hd, &c);
}
	
int main() {
	
	bool GameOver = false;
	
	Enemigo a(5,5);
	Enemigo b(15,5);
	Enemigo c(25,5);
	
	a.dibujar();
	b.dibujar();
	c.dibujar();
	
	
	Nave p(35, 25);
	
	p.dibujar();
	
	Espacio s;

	while(!GameOver){
		cursor();
		p.disparar();
		p.mover();
		p.dib_cora();
		p.morir();
		a.mover();
//		b.mover();
//		c.mover();
		
		Sleep(100);
	}
	
	return 0;
}

