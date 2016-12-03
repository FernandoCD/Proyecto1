#ifndef OBJETO_H
#define OBJETO_H

#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

class objeto{
public:
	virtual void got(int x1, int y1){
		HANDLE hd;
		hd = GetStdHandle(STD_OUTPUT_HANDLE);
		
		COORD pos;
		pos.X = x1;
		pos.Y = y1;
		
		SetConsoleCursorPosition(hd, pos);
	}
};


#endif
