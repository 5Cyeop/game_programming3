#include "common.h"
#include "Book.h"

int main()
{
	Book book;
	SpellBook spbook;
	StoryBook stbook;
	QuestBook qbook;

	book.Read();
	spbook.Read();
	stbook.Read();
	qbook.Read();
	book.ShowPage();
}