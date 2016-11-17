#ifndef ESPACIO_H
#define ESPACIO_H

#include <iostream>
#include "Nave_base.h"
using namespace std;

class Espacio : public objeto{
public:
	Espacio(){
		for(int i = 3; i < 78; i++){
			got(i, 4);
			cout << "#";
			got(i, 31);
			cout << "#";
		}
		
		for(int i = 4; i < 32; i++){
			got(2, i);
			cout << "#";
			got(77, i);
			cout << "#";
		}
	}
};

#endif
