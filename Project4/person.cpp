#include "person.h"

void Person::Clone(const Person& other)
{
	age = other.age;
	name = new char[strlen(str) + 1];
	
}

void Person::Show() const
{
	cout << "Age: " << age << endl;
	cout << "Name: " << name << endl;
}