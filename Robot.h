#pragma once
#include "Enemies.h"
class Robot {

public:
	Robot() {};
	virtual ~Robot() {};
	virtual void Act();
	virtual void Fight(Enemy* en);
	virtual void SelfDestruct();
	virtual void Escape();

protected:
	unsigned int endurance;
	unsigned int defence;
	unsigned int attackLevel;
};

