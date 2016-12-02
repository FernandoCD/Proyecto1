#include "nave.h"
#include "nave_enem.h"

#define ARRIBA 72
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75

Nave::Nave(){
	x = 20;
	y = 34;
	vidas = 3;
	GameOver_1 = false;
}

Nave::Nave(int x1, int y1){
	x = x1;
	y = y1;
	vidas = 3;
	GameOver_1 = false;
}

void Nave::dibujar(){
	got(x, y);
	cout << " " << 'A';
	got(x, y+1);
	cout << '/' << '-' << '\\';
	got(x, y+2);
	cout << '/' << '|' << "\\";
	dib_vid();
}

void Nave::mover(){
	if(vidas == 0){
		GameOver_1 = true;
		got(2,2);
		cout << "Game Over";
	}
	else if(kbhit()){
		char tecla = getch();
		borrar();
		if(tecla == ARRIBA && y > 15)
			y--;
		if(tecla == ABAJO && y+2 < 36)
			y++;
		if(tecla == DERECHA && x+3 < 39)
			x++;
		if(tecla == IZQUIERDA && x > 4)
			x--;
		dibujar();
	}
}

void Nave::disparar(){
	list<Disparos *>::iterator it;
	if(kbhit()){
		char tecla = getch();
		if(tecla == 'e' && vidas != 0){
			d.push_back(new Disparos(x + 1, y - 1));
		}
		if(tecla == 32)
			getch();
	}
	for(it = d.begin(); it != d.end(); it++){
		(*it) -> disp(2);
		if((*it) -> gety() == 5){
			got((*it)->getx(), (*it)->gety());
			cout << " ";
			delete *it;
			it = d.erase(it);
		}
	}
//	got(2,2);
//	cout << d.size();
}

void Nave::borrar(){
	got(x, y);
	cout << " " << " " << " ";
	got(x, y+1);
	cout << " " << " " << " ";
	got(x, y+2);
	cout << " " << " " << " ";
}

void Nave::morir(){
	if(vidas > 0){
		borrar();
		got(x, y);
		cout << " " << '*' << " ";
		got(x, y+1);
		cout << '*' << '*' << '*';
		got(x, y+2);
		cout << " " << '*' << " ";
		
		Sleep(150);
		
		borrar();
		got(x, y);
		cout << '*' << " " << '*';
		got(x, y+1);
		cout << " " << '*' << " ";
		got(x, y+2);
		cout << '*' << " " << '*';
		
		Sleep(150);
		
		borrar();
		vidas--;
		dib_vid();
	}
}
void Nave::dib_vid(){
	got(32, 2);
	cout << "Vidas: ";
	got(39, 2);
	cout << vidas;
}


