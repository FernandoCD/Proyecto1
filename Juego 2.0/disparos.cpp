#include "disparos.h"

Disparos::Disparos(const int x1, const int y1){
	x = x1;
	y = y1;
}

void Disparos::disp(int a){
	if(y > 36 || y == 5){
		got(x, y);
		cout << " ";
	}
	else{
		got(x, y);
		cout << " ";
		if(a == 1)
			y++;
		else
			y--;
		got(x, y);
		cout << '!';
	}
}

