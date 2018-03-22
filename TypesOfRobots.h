#pragma once
#include "Robot.h"

/*lethal autonomous weapons systems that uses 
voltage electric discharges to attack*/
class CombatantRobot : Robot{
public:
	CombatantRobot() {};
	virtual ~CombatantRobot() {};
	virtual void Act() override;
	virtual void Fight(Enemy* en) override;
	virtual void SelfDestruct()override;
	virtual void Escape()override;
};

/*Collects information is collected on the battlefield 
through systematic observation by deployed soldiers and 
a variety of electronic sensors*/
class MilitaryIntelligence : Robot {
public:
	MilitaryIntelligence() {};
	~MilitaryIntelligence() {};
	void Act() override;
	void Fight(Enemy* en)override;
	void SelfDestruct()override;
	void Escape()override;
};

/* Adds land mines to the area and activates 
them, when commanded*/
class MiningRobot : Robot {
public:
	MiningRobot() {};
	~MiningRobot() {};
	void Act() override;
	void Fight(Enemy* en)override;
	void SelfDestruct()override;
	void Escape()override;
};
