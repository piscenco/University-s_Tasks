#pragma once
// class representing all enemies
class Enemy {
	Enemy() {};
	~Enemy() {};
	virtual void Defend();
	virtual void Attack(Robot* r);
protected:
	unsigned int endurance;
	unsigned int defence;
	unsigned int attackLevel;
};