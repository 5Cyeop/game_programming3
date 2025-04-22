#pragma once
#include "skill.h"
#include "Entity.h"

class Character : public Entity
{
private:
	int HP;

public:
	void UseSkill(skill& skill);

	void UseHP();
};

