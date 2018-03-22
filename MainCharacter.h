#pragma once
#include "Robot.h"

// The Main Character, which is a singeleton
//it can't be created 2 times, moved or copied
class MainCharacter {

public:
	void Repair(Robot* r);
	void UpgradeRobot(Robot* r);
	void Defend();
	void Escape();

private:
	unsigned int health;
	unsigned int stamina;
	unsigned int defence;
	unsigned int attackLevel;
	unsigned int knowledge;
	MainCharacter() {};
	MainCharacter(const MainCharacter& ch) = delete;
	MainCharacter& operator=(const MainCharacter&) = delete;
};