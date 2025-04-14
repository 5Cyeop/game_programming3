#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
#include <iomanip> // input output manipulate
using namespace std;

namespace ConsoleUtils
{
	void GoToXY
}

struct Pos
{
	int x;
	int y;
};

struct Item
{
	string name;
	int price;
};

int& ReturnRef()
{
	int num = 20;
	num += 5;
	return num;
}

void SetItem(Item& item, const string N_name, int price)
{
	item.name = N_name;
	item.price = price;

}

void SetItem(Item& SetItem, const Item& CopyItem)
{
	SetItem.name = CopyItem.name;
	SetItem.price = CopyItem.price;
}

void PlayerInput(Pos& playerPos)
{
	playerPos.x += 1;
	playerPos.y += 1;
}

void ShowShop(Item shop[], int length)
{
	for (int i = 0; i < length; i++)
	{
		ConsoleUtils::GoToXY
	}
}

int main()
{
	int playerX = 1;
	int playerY = 2;
	Pos playerPos = { playerX, playerY };

	PlayerInput(playerPos);
	
	cout << playerPos.x << endl << playerPos.y << endl;


	Item ItemA;
	Item ItemB;
	SetItem(ItemA, "Apple", 100);
	SetItem(ItemB, ItemA);
	cout << "name: " << ItemA.name << ", price: " << ItemA.price << endl;
	cout << "name: " << ItemB.name << ", price: " << ItemB.price << endl;
	_getch();
}