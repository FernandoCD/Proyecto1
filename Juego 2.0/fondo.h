#ifndef FONDO_H
#define FONDO_H

#include "objeto.h"

class Fondo : public objeto{
private:
	int x, y;
public:
	Fondo(){
		x = rand()%33 + 4;
		y = 5;
	}
	
	void const_f(){
		for(int i = 0; i < 2; i++){
			got(x, y);
			cout << " ";
			y++;
			if(y > 39){
				x = rand()%33 + 4;
				y = 5;
			}
			got(x, y);
			cout << ".";
		}
	}
};
#endif
