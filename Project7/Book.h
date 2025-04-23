#pragma once
#include "common.h"

class BookMark
{
	int page;
public:
	void ShowPage();
};

class Book : public BookMark
{
private:
	BookMark* bookmark;

public:
	void Read();
};

class SpellBook : public Book
{

};

class StoryBook : public Book
{

};

class QuestBook : public Book
{

};

