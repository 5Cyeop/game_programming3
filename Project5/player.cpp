#include "player.h"

void Player::Attacked(int damage)
{
	if (damage < 0)
	{
		cout << "Player Already Death" << endl;
	}
	HP -= damage;

	if (HP <= 0)
	{
		isDeath = true;
	}
}

void Player::Recovery(int heal)
{
	if (HP > MaxHP)
	{
		HP = MaxHP;
		return;
	}

	HP += heal;
}
