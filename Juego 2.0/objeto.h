#ifndef OBJETO_H
#define OBJETO_H

class objeto{
public:
	void got(int x1, int y1){
		HANDLE hd;
		hd = GetStdHandle(STD_OUTPUT_HANDLE);
		
		COORD pos;
		pos.X = x1;
		pos.Y = y1;
		
		SetConsoleCursorPosition(hd, pos);
	}
};


#endif
