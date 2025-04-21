#pragma once
#include <iostream>
#include "HP.h"
using namespace std;

class Enemy
{
private:
	int HP;
	int MaxHP;
	bool isDeath;

public:
	void Attacked(int damage);
	void Recovery(int heal);
};