#include "Weapon.h"

int Weapon::DoUpgrade()
{
	return LV * (baseATK + weight);
}

void Weapon::ShowInfo()
{
	cout << name << "�������ݷ� : " << DoUpgrade() << endl;
}

void Weapon::Attack()
{
	cout << name << "���� �����Ͽ� " << DoUpgrade() << "�� �������� �������ϴ�." << endl;
}

void Weapon::Upgrade()
{
	DoUpgrade();
}

void Spear::Attack()
{
	cout << "â���� �����մϴ�." << endl;
	Weapon::Attack();
}

void Spear::Upgrade()
{
	FinATK = DoUpgrade() + specialATK;
}

void Sword::Attack()
{
	cout << "������ �����մϴ�." << endl;
	Weapon::Attack();
}

void Sword::Upgrade()
{
	FinATK = DoUpgrade() + 10;
	cout << "���� ���ݷ� : " << FinATK << endl;
}
