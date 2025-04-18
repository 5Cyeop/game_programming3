#include "common.h"
#include "enemy.h"

int main()
{

	Enemy Slime(100, 10, 1, "SLIME", SlimeMove, IDLE);



	int slimeX = 30;
	int slimeY = 5;

	Slime.ShowImage(slimeX, slimeY);
	_getch();

	while (true)
	{
		

		Slime.SetBattleImage(SlimeIdle, slimeX, slimeY);
		Sleep(1000);
		system("cls");
		Slime.SetBattleImage(SlimeMove, slimeX, slimeY);
		Sleep(1000);
		system("cls");
	}
}