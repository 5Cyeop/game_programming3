#pragma once
class Entity
{
protected:
	int HP;
	int STR;
	int DEF;

public:
	int GetHP();
	int GetSTR();
	int GETDEF();
	void SetHP(int value);
	void SetSTR(int value);
	void SetDEF(int value);
};

