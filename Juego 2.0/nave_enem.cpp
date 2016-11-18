#include "nave_enem.h"

#define ARRIBA 72
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75

Enemigo::Enemigo(int x1, int y1){
	x = x1;
	y = y1;
	vidas_e = 0;
}

void Enemigo::dibujar(){
	got(x, y);
	cout << '+' << '+' << '+';
	got(x, y+1);
	cout << '+' << '+' << '+';
	got(x, y+2);
	cout << " " << '+' << " ";
}

void Enemigo::mover(){
	borrar();
	if (y != 10){
		y++;
	}
	else{
		if(vidas_e != 0)
			mover();
	}
	dibujar();
}

void Enemigo::disparar(){
	
}

void Enemigo::borrar(){
	got(x, y);
	cout << " " << " " << " ";
	got(x, y+1);
	cout << " " << " " << " ";
	got(x, y+2);
	cout << " " << " " << " ";
}

void Enemigo::morir(){
	if(vidas_e == 0){
		got(x, y);
		cout << "." << "." << ".";
		got(x, y+1);
		cout << "." << "." << ".";
		got(x, y+2);
		cout << " " << '.' << " ";
	}
	
}
