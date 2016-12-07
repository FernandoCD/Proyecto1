#ifndef PUNTAJE_H
#define PUNTAJE_H

#include "objeto.h"
#include <fstream>
#include <map>

ofstream Ranking("Puntajes.txt", ios::out|ios::app);
ifstream Highscores("Puntajes.txt", ios::out|ios::in);

class Puntuacion:public objeto{
	string n;
	int p;
	map<int, string> Pun_Ord;
public:
	void guardar(string n, int p){
		Ranking << n << " " << p << endl;
		Ranking.close();
	}

	void mostrar(){
		got(20, 1);
		cout << "HIGH SCORES" << endl;
		Highscores >> n;
		while(!Highscores.eof()){
			Highscores >> p;
			Pun_Ord[p] = n;
			Highscores >> n;
		}
		Highscores.close();
		
		int i = 3;
		map<int, string>::reverse_iterator it;
		
		for (it = Pun_Ord.rbegin(); it != Pun_Ord.rend(); ++it){
			got(20, i);
			cout << it -> second;
			got(30, i);
			cout << it -> first << endl;
			i++;
		}
	}
};

#endif
