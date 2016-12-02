#include "menu.h"
#include "juego.h"
#include <map>

int main() {
	
	Menu m;
	Selec s;
	system("color f1");
	bool term = s.ter_sel();
	while(!term){
		s.seleccionar();
		term = s.ter_sel();
	}
	
	system("cls");

	int pun = s.get_p();
	cout << "Ingresa tu Nombre: ";
	string nombre;
	cin >> nombre;
	
	system("cls");
	
	cout << nombre << endl;
	cout << "Puntaje:" << pun;
	
	s.get_punt().guardar(nombre, pun);

	
	return 0;
}
