#include "MonsterHandler.h"

void MonsterHandler::BattleWithPlayer(Monster& monster)
{
	if (dynamic_cast<Slime*>(&monster))
	{
		cout << "�������� ������ ����˴ϴ�." << endl;
	}

	if (dynamic_cast<Orc*>(&monster))
	{
		cout << "��ũ�� ������ ����˴ϴ�." << endl;
	}

	monster.Attack();
}
