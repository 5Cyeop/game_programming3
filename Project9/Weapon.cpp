#include "Weapon.h"

int Weapon::DoUpgrade()
{
	return LV * (baseATK + weight);
}

void Weapon::ShowInfo()
{
	cout << name << "최종공격력 : " << DoUpgrade() << endl;
}

void Weapon::Attack()
{
	cout << name << "으로 공격하여 " << DoUpgrade() << "의 데미지를 입혔습니다." << endl;
}

void Weapon::Upgrade()
{
	DoUpgrade();
}

void Spear::Attack()
{
	cout << "창으로 공격합니다." << endl;
	Weapon::Attack();
}

void Spear::Upgrade()
{
	FinATK = DoUpgrade() + specialATK;
}

void Sword::Attack()
{
	cout << "검으로 공격합니다." << endl;
	Weapon::Attack();
}

void Sword::Upgrade()
{
	FinATK = DoUpgrade() + 10;
	cout << "검의 공격력 : " << FinATK << endl;
}
