// Ed- class 18th May.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class Coords
{
	int x;
	int y;
public:
	Coords() : x(), y()
	{}

	Coords(int x_, int y_): x(x_), y(y_)
	{}
	void printCoords()
	{
		std::cout << "X coords: " << x << std::endl;
		std::cout << "Y coords: " << y << std::endl;
	}
	Coords operator + (Coords p);
};

Coords Coords::operator + (Coords p)
{
	/*Coords tmp;
	tmp.x = x + p.x;
	tmp.y = y + p.y;
	return tmp;*/
	return Coords(x + p.x, y + p.y);
}

int main()
{
	Coords p1(1, 2), p2(2, 4), p3;
	p3 = p1 + p2;

	p3.printCoords();

	system("pause");
	return 0;
}


