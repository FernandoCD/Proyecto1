#include "nave.h"
#include "espacio.h"
#include "disparos.h"
#include <vector>

#define ARRIBA 72
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75

vector<Disparos *> d;
vector<Disparos *>::iterator it;

Nave::Nave(int x1, int y1){
	x = x1;
	y = y1;
	vidas = 3;
}

void Nave::dibujar(){
	got(x, y);
	cout << " " << '+';
	got(x, y+1);
	cout << '<' << '-' << '>';
}

void Nave::mover(){
	if(kbhit()){
		char tecla = getch();
		borrar();
		if(tecla == ARRIBA && y > 6)
			y--;
		if(tecla == ABAJO && y+2 < 30)
			y++;
		if(tecla == DERECHA && x+3 < 76)
			x++;
		if(tecla == IZQUIERDA && x > 4)
			x--;
		dibujar();
	}
}

void Nave::disparar(){
	
	if(kbhit()){
		char tecla = getch();
		if(tecla == 'e'){
			d.push_back(new Disparos(x + 1, y - 1));
		}
	}
	for(it = d.begin(); it != d.end(); ++it)
		(*it) -> disp();
}

void Nave::borrar(){
	got(x, y);
	cout << " " << " ";
	got(x, y+1);
	cout << " " << " " << " ";
}

void Nave::morir(){
	if(vidas == 0){
		borrar();
		got(x, y);
		cout << " " << '.';
		got(x, y+1);
		cout << '.' << '.' << '.';
		borrar();
		Sleep(300);
	}
}
void Nave::dib_cora(){
	got(64, 2);
	cout << "Vidas: ";
	got(72, 2);
/*	for(int i = 0; i < vidas; i++)*/
		cout << vidas;
}