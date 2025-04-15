#pragma once
#include <iostream>
#include <string.h>
//using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::string;

void NameSpaceExample()
{
	int number = 0;
	cin >> number;
	cout << "number's value: " << number << endl;
}

enum ItemType
{
	ARMOR, WEAPON, USEABLE
};

struct Item
{
	string name;
	int price;
	ItemType type;
	int itemQ;

	void ShowItemInfo();

	string ReturnByTypeName();
};
