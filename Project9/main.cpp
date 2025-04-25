#include "Common.h"
#include "Weapon.h"
#include "UpgradeSys.h"

int main()
{
	string name = "·Õ¼Òµå";
	int LV = 1;
	int baseATK = 5;
	int weight = 3;

	int FinATK = LV * (baseATK + weight);

	cout << name << "ÃÖÁ¾°ø°Ý·Â : " << FinATK << endl;

	string name2 = "·Õ¼Òµå";
	int LV2 = 1;
	int baseATK2 = 4;
	int weight2 = 7;

	int FinATK2 = LV2 * (baseATK2 + weight2);

	cout << name2 << "ÃÖÁ¾°ø°Ý·Â : " << FinATK2 << endl;

	Weapon weapon("·Õ¼Òµå",1, 3, 5);
	weapon.ShowInfo();

	Weapon weapon2("³ª¹«¸ùµÕÀÌ", 99, 1000, 1);
	weapon2.ShowInfo();

	Spear spear("Ã¢", 1, 3, 5, 2);
	spear.Attack();
	Sword sword("°Ë", 1, 4, 7);
	sword.Attack();

	UpgradeSystem upgradesystem;
	upgradesystem.Upgrade(&sword);
}