#include "item.h"

void Item::ShowItemInfo()
{
	cout << "Item Name: " << name << endl << "Item Type: " << ReturnByTypeName() << endl << "Item Price: " << price << endl << "Item Quantity: " << itemQ << endl;
}

string Item::ReturnByTypeName()
{
	switch (type)
	{
	case ARMOR: return "ARMOR";
	case WEAPON: return "WEAPON";
	case USEABLE: return "UESABLE";
	}
}
