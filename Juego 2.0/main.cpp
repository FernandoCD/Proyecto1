#include "menu.h"
#include "juego.h"
#include <map>

int main() {
	
	Menu m;
	Selec s;
	m.Const_menu();
	system("color f1");
	bool term = s.ter_sel();
	while(!term){
		s.seleccionar();
		term = s.ter_sel();
		if(term != true){
			m.Const_menu();
			Sleep(60);
		}
	}
	
	system("cls");

	int pun = s.get_p();
	cout << "Ingresa tu Nombre: ";
	string nombre;
	cin >> nombre;
	
	s.get_punt().guardar(nombre, pun);
	
	system("cls");
	
	cout << nombre << endl;
	cout << "Puntaje:" << pun;
	
	
	
	return 0;
}
