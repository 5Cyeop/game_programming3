#include "Enemy.h"

void Enemy::Attacked()
{
	cout << "Attacked" << endl;
	HP -= 10;
}

void Enemy::Deffence()
{
	cout << "Deffece Ready" << endl;
	DEF += 5;
}

void Enemy::Recovery()
{
	cout << "Recover" << endl;
	HP += 10;
}

void Enemy::BehaviorAI()
{
	if (HP > 5)
	{
		currentPattern = AGGRESSIVE;
	}
	
	else if (HP % 2 == 0)
	{
		currentPattern = DEFFENSIVE;
	}
	
	else
	{
		currentPattern = COWARD;
	}
}

void Enemy::Action()
{
	BehaviorAI();

	switch (currentPattern)
	{
	case AGGRESSIVE:
		Attacked();
		break;

	case DEFFENSIVE:
		Deffence();
		break;

	case COWARD:
		Recovery();
		break;
	}
}
