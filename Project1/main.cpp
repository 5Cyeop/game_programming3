#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

namespace ConsoleUtils
{
	void GotoXY(int x, int y)
	{
		COORD pos = { x, y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
}

int main()
{
	char name[10];
	ConsoleUtils::GotoXY(10, 10);
	cout << "Setting Player Name:";

	while (true)
	{
		int inputNumber = 0;
		cout << "1.Change Name  2.Output Player Name" << endl;
		cin >> inputNumber;

		if (inputNumber == 1)
		{
			cout << "Setting Player Name: ";
			cin >> name;
		}

		else if (inputNumber == 2)
		{
			ConsoleUtils::GotoXY(10, 10);
			cout << "Player Information" << endl;
			ConsoleUtils::GotoXY(10, 11);
			cout << "Player Name: " << name << endl;
			_getch();
		}

		else
		{

		}


		system("cls");
	}

}