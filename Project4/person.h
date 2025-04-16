#pragma once
#include "common.h"


struct Person
{
	int age;
	char* name;

	Person() {}

	Person(int age, const char* str) : age(age)
	{
		name = new char[strlen(str) + 1];
		strcpy(name, str);
	}

	~Person()
	{
		cout << "Person�� �Ҹ��ڰ� ȣ��Ǿ����ϴ�." << endl;
		delete[] name;
	}

	void Clone(const Person& other);
	
	void Show() const;

};