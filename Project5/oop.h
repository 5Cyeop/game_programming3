#pragma once
#include <iostream>
using namespace std;

struct Point
{
	int x;
	int y;

	Point(int x, int y) : x(x), y(y) {}
};

class cPoint
{
private:
	int x;
	int y;

public:
	cPoint() {}
	cPoint(int x2, int y2)
	{
		if (x2 < 0 || y2 < 0)
		{
			cout << "Error" << endl;
			throw invalid_argument("Error");
		}

		x = x2;
		y = y2;
	}

	int Getx() const;
	int Gety() const;

	void Setx(int amount);
	void Sety(int amount);
};

class Rectangle
{
private:
	cPoint leftUpPoint;
	cPoint rightDownPoint;

public:
	Rectangle() {}
	Rectangle(cPoint p1, cPoint p2)
	{
		if (p1.Getx() < p2.Getx() && p1.Gety() < p2.Gety())
		{
			leftUpPoint = p1;
			rightDownPoint = p2;
		}

		else
		{
			leftUpPoint = p2;
			rightDownPoint = p1;
		}	
	}

	Rectangle(int x1, int x2, int y1, int y2)
	{
		cPoint newLeftUp;
		cPoint newRightDown;

		if (x1 < x2)
		{
			newLeftUp.Setx(x1);
			newRightDown.Setx(x2);
		}

		else if (x1 > x2)
		{
			newLeftUp.Setx(x2);
			newRightDown.Setx(x1);
		}

		else
		{
			cout << "Error X" << endl;
		}

		if (y1 < y2)
		{
			newLeftUp.Sety(y1);
			newRightDown.Sety(y2);
		}

		else if (y1 > y2)
		{
			newLeftUp.Sety(y2);
			newRightDown.Sety(y1);
		}

		else
		{
			cout << "Error Y" << endl;
		}
	}

	void Draw();
};

void Example1();
void Example2();
void Example3();