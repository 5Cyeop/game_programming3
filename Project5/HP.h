#pragma once
#include <iostream>
using namespace std;

class HP
{
private:
	int HP;
	int MaxHP;
	bool isDeath;

public:
	void Attacked(int damage);
	void Recovery(int heal);
};