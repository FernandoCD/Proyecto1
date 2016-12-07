#include "menu.h"
#include "juego.h"


int main() {
	
	Menu m;
	Selec s;
	m.Const_menu();
	system("color f1");
	bool term = s.ter_sel();
	while(!term){
		s.seleccionar();
		if(term != true){
			m.Const_menu();
			Sleep(60);
		}
		term = s.ter_sel();
	}
	
	system("cls");

	int pun = s.get_p();
	Puntuacion a = s.get_punt();
	
	cout << "Ingresa tu Nombre: ";
	string nombre;
	cin >> nombre;
	
	a.guardar(nombre, pun);
	system("cls");
	a.mostrar();
	getch();
	
	return 0;
}

