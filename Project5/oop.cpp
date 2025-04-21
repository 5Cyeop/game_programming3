#include "oop.h"

void Example1()
{
	Point p1 = { 2, 8 };
	Point p2 = { 4, 10 };

	Point point(4, 6);
	cPoint cp1(3, 5);

	cp1.Setx(3);
}

void Example2()
{
}

void Example3()
{
}

int cPoint::Getx() const
{
	return 0;
}

int cPoint::Gety() const
{
	return 0;
}

void cPoint::Setx(int amount)
{
	if (amount < 0)
	{
		cout << "Error X" << endl;
		return;
	}
	x = amount;
}

void cPoint::Sety(int amount)
{
	if (amount < 0)
	{
		cout << "Error Y" << endl;
		return;
	}
	y = amount;
}
