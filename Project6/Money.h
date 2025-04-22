#pragma once

class Gem
{
public:
	void Add();
	void Use();
};

class Gold
{
public:
	void Add();
	void Use();
};

class Money
{
private:
	Gold gold;
	Gem gem;
public:
	void Add();
	void Use();
};

