#include "nave.h"
#include "nave_enem.h"
#include "espacio.h"
#include "mediator.h"
#include <map>

	
int main() {
	
	Nave p(20, 34);
	p.dibujar();
	
	Enemigo a;
	Espacio s;
	Mediator m;
	
	bool GameOver = p.get_estado();
	
	while(!GameOver){
		
		s.cons(p);
		m.colision(p, a);
		
		p.disparar();
		p.mover();
		
		a.disparar();
		a.mover();
		
		Sleep(150);
		
		GameOver = p.get_estado();
	}
	
	system("cls");
	
	
	map<string, int> Punt;
	
	cout << "Ingresa tu Nombre: ";
	string nombre;
	cin >> nombre;
	
	return 0;
}

