#pragma once
#include <iostream>
#include "Entity.h"
using namespace std;

enum BehaviorPattern
{
	AGGRESSIVE, DEFFENSIVE, COWARD
};

class Enemy : public Entity
{
private:
	BehaviorPattern currentPattern;

	void Attacked();
	void Deffence();
	void Recovery();
	void BehaviorAI();

public:
	void Action();
};

