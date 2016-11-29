#include "nave.h"
#include "nave_enem.h"
#include "espacio.h"
#include "mediator.h"
#include <fstream>
#include <map>

	
int main() {
	
	ofstream Ranking;
	Ranking.open("Puntajes.txt",ios::out);
	
	
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
	
	int pun = a.get_pun();
	
	cout << "Ingresa tu Nombre: ";
	string nombre;
	cin >> nombre;
	
	Punt[nombre].push_back(pun);
	
	system("cls");
	
	cout << nombre << endl;
	cout << "Puntaje:" << pun;
	
	
	return 0;
}

