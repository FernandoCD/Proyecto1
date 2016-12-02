#ifndef PUNTAJE_H
#define PUNTAJE_H

#include "objeto.h"
#include <fstream>

ofstream Ranking("Puntajes.txt", ios::out|ios::app);
ifstream Highscores("Puntajes.txt", ios::out|ios::in);

class Puntuacion:public objeto{
	
public:
	void guardar(string n, int p){
		Ranking << n << " " << p << endl;
		Ranking.close();
	}

	void mostrar(){
		string n;
		int p;
		int i = 3;
		Highscores >> n;
		got(20, 1);
		cout << "HIGH SCORES" << endl;
		while(!Highscores.eof()){
			Highscores >> p;
			got(19, i);
			cout << n << " " << p << endl;
			i++;
			Highscores >> n;
		}
		Highscores.close();
	}
};

#endif
