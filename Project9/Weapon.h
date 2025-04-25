#pragma once
#include "Common.h"

class Weapon
{
private:
	string name;
	int LV;
	int baseATK;
	int weight;

protected:
	int DoUpgrade();
	int FinATK;

public:
	Weapon(string name, int base, int weight)
		: name(name), LV(1), baseATK(base), weight(weight) {}
	Weapon(string name,int lv, int base, int weight)
		: name(name), LV(lv), baseATK(base), weight(weight) {}


	void ShowInfo();
	virtual void Attack();
	virtual void Upgrade();
};

class Spear : public Weapon
{
private:
	int specialATK;

public:
	Spear(string name, int lv, int base, int weight, int speicalATK)
		: Weapon(name, lv, base, weight), specialATK(specialATK) {}

	void Attack() override;
	void Upgrade() override;
};

class Sword : public Weapon
{
public:
	Sword(string name, int lv, int base, int weight)
		: Weapon(name, lv, base, weight) {}

	void Attack() override;
	void Upgrade() override;
};

