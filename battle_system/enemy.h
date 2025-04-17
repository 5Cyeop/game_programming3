#pragma once
#include "common.h"
#include "image.h"

struct Enemy
{
	int HP;
	int STR;
	int DEF;
	string name;
	char Image[IMAGEHEIGHT][IMAGEWIDTH + 1];

	Enemy(int HP, int STR, int DEF, string name, char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
		: HP(HP), STR(STR), DEF(DEF), name(name)
	{
		for (int y = 0; y < IMAGEHEIGHT; y++)
		{
			for (int x = 0; x < IMAGEWIDTH + 1; x++)
			{
				this->Image[y][x] = Image[y][x];
			}
		}
	}

	void ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1]);

	void ShowImage(int& posX, int& posY);

	bool IsBattle(int x, int y);

	void SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1], int& posX, int& posY);
};	