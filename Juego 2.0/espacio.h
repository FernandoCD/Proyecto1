#ifndef ESPACIO_H
#define ESPACIO_H

#include <vector>
#include "objeto.h"
#include "fondo.h"

class Espacio : public objeto{
private:
	vector<Fondo *> c;
public:
	Espacio(){
		for(int i = 3; i < 40; i++){
			got(i, 4);
			cout << "#";
			got(i, 40);
			cout << "#";
		}
		
		for(int i = 4; i < 41; i++){
			got(2, i);
			cout << "#";
			got(40, i);
			cout << "#";
		}
	}
	
	void cons(){
		vector<Fondo *>::iterator it_f;
		
		if(c.size() != 25)
			c.push_back(new Fondo());
		
		for(it_f = c.begin(); it_f != c.end(); ++it_f)
			(*it_f) -> const_f();
		
	}
};

#endif
