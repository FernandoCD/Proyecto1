#ifndef DISPAROS_H
#define DISPAROS_H

class Disparos:public objeto{
private:
	int x, y;
public:
	Disparos(int x1, int y1) : x(x1),y(y1){}
	
	void disp(){
		got(x, y);
		cout << " ";
		if(y > 5)
			y--;
		got(x, y);
		cout << 'x';
	}	
};
#endif
