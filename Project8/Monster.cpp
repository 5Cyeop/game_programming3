#include "Monster.h"

void Monster::Attack()
{
	CalculateFinATK();
	cout << "���� ���ݷ�: " << finATK << endl;
}

void Monster::CalculateFinATK()
{
	finATK = LV * defaultATK;
}

void Slime::Attack()
{
	Monster::Attack();
	cout << "������.Ư������� �����մϴ�." << endl;
}

void Orc::Attack()
{
	Monster::Attack();
	cout << "��ũ.Ư������� �����մϴ�." << endl;
}
