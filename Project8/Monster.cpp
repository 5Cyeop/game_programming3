#include "Monster.h"

void Monster::Attack()
{
	CalculateFinATK();
	cout << "최종 공격력: " << finATK << endl;
}

void Monster::CalculateFinATK()
{
	finATK = LV * defaultATK;
}

void Slime::Attack()
{
	Monster::Attack();
	cout << "슬라임.특수기능을 실행합니다." << endl;
}

void Orc::Attack()
{
	Monster::Attack();
	cout << "오크.특수기능을 실행합니다." << endl;
}
