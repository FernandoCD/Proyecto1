#ifndef MENU_H
#define MENU_H

#include "objeto.h"
#include "juego.h"
#include "Puntaje.h"
#include <conio.h>

#define ARRIBA 72
#define ABAJO 80
#define ENTER 13

class Menu;

class Selec : public objeto{
private:
	int x, y, p;
	bool sel;
	Puntuacion a;
public:
	Selec(){
		x = 18;
		y = 15;
		p = 0;
		sel = false;
		dibujar();
	}
	
	void dibujar(){
		got(x, y);
		cout << ">"; 
	}
	
	void borrar(){
		got(x, y);
		cout << " ";	
	}
	
	void seleccionar(){
		if(kbhit()){
			borrar();
			char tecla = getch();
			if(tecla == ARRIBA && y > 15)
				y-=5;
			if(tecla == ABAJO && y < 20)
				y+=5;
			if(tecla == ENTER){
				if(y == 15){
					system("cls");
					Juego a;
					p = a.juego_pun();
					sel = true;
				}
				else{
					system("cls");
					a.mostrar();
					getch();
					sel = true;
				}
			}
			dibujar();
		}
	}
	
	bool ter_sel(){
		return sel;
	}
	
	int get_p(){
		return p;
	}
	
	Puntuacion get_punt(){
		return a;
	}
};

class Menu : public objeto{
public:
	Menu(){
		got(4, 5);
		cout << "   _______  ___  _______________ _________ " << endl;
		got(4, 6);
		cout << "  / __/ _ \\/ _ |/ ___/ __/ __/ // /  _/ _ \\" << endl;
		got(4, 7);
		cout << " _\\ \\/ ___/ __ / /__/ _/_\\ \\/ _  // // ___/" << endl;
		got(4, 8);
		cout << "/___/_/  /_/ |_\\___/___/___/_//_/___/_/" << endl;
		
		got(20, 15);
		cout << "JUGAR";
		
		got(20, 20);
		cout << "PUNTUACIONES";
	}
};

#endif
