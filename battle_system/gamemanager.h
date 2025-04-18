#pragma once
#include "enemy.h"

struct GameManager
{
	Enemy currentEnemy;

	GameManager(Enemy enemy, TurnSystem turn) : currentEnemy(enemy) {}
};