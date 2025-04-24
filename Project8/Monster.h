#pragma once
#include <iostream>
using namespace std;

class EleTYPE
{

};

class Monster
{
protected:
	int EXP;
	int LV;
	int defaultATK;
	int finATK;
	EleTYPE type;

public:
	Monster() {}
	Monster(int lv, int defaultATK) : LV(lv), defaultATK(defaultATK) {}

public :
	virtual void Attack();

	void CalculateFinATK();
};

class Slime : public Monster
{
public:
	Slime(int lv, int defaultATK) : Monster(lv, defaultATK) {}
public:
	void Attack() override;
};

class Orc : public Monster
{
public:
	Orc(int lv, int defaultATK) : Monster(lv, defaultATK) {}
public:
	void Attack() override;
};

