#include "nave_enem.h"

#define ARRIBA 72
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75

Enemigo::Enemigo(){
	POS_X = 10;
	POS_Y = 5;
	x = POS_X;
	y = POS_Y;
	vidas_e = 1;
	puntaje = 0;
}

void Enemigo::dibujar(){
	got(x, y);
	cout << '_' << 'x' << '_';
	got(x, y+1);
	cout << '<' << 'O' << '>';
	got(x, y+2);
	cout << " " << 'T' << " ";
	
	got(2, 2);
	cout << "Puntaje: " << puntaje;
}

void Enemigo::mover(){
	if(vidas_e > 0){
		borrar();
		y++;
		if(y > 37 && POS_Y > 37){
			x = rand()%33 + 4;
			y = 5;
			POS_X = x;
			POS_Y = 5;
		}
		dibujar();
	}
	else{
		y = 5;
		x = rand()%33 + 4;
		POS_X = x;
		POS_Y = 5;
		vidas_e++;
		puntaje+=100;
	}
}

void Enemigo::disparar(){
	if (vidas_e > 0){
		c.modx(POS_X + 1);
		c.mody(POS_Y);
		for(int i = 0; i < 2; i++){
			if(POS_Y < 39){
				c.disp(1);
				POS_Y++;
			}
		}
	}
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
	if(vidas_e > 0){
		got(x, y);
		cout << " " << "." << " ";
		got(x, y+1);
		cout << "." << "." << ".";
		got(x, y+2);
		cout << " " << '.' << " ";
		Sleep(150);
		
		borrar();
		vidas_e--;
	}
}

