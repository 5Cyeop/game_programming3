#pragma once
#include <iostream>
using namespace std;

class Mana
{
public:
	void Use();
};

class Stat
{
public:
	void Use();
};

class Effect
{
public:
	void Use();
};

class skill
{
private:
	Mana mana;
	Stat stat;
	Effect effect;

	void manaUse();
	void statUse();
	void effectUse();


public:

	void Use();
};