#include "common.h"
#include "person.h"

int main()
{
	//Person human1 = { 23 };

	Person human1(23, "name");
	Person human1Clone;
	human1Clone.Clone(human1);
	human1.Show();
	human1Clone.Show();
}