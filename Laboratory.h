#pragma once
#include "TypesOfRobots.h"
#include <iostream>
#include <memory>

using namespace std;

//Creator
class ConstructRobot{
public:
	ConstructRobot() {};
	virtual shared_ptr<Robot> BuildIt();
	virtual ~ConstructRobot() {};
};

//ConcreteCreator 1
class ConstructCR: public ConstructRobot {
public:
	ConstructCR() {};
	shared_ptr<Robot> BuildIt() {
		//Robot*r;
		//CombatantRobot* r1 = new CombatantRobot();
		std::shared_ptr<Robot> r;
		std::shared_ptr<CombatantRobot> r1;
		r1 = std::make_shared<CombatantRobot>();
		r = std::dynamic_pointer_cast<Robot>(r1);
		return r;
	};
	~ConstructCR() {};
};

//ConcreteCreator 2
class ConstructMI : public ConstructRobot {
public:
	ConstructMI() {};
	shared_ptr<Robot> BuildIt() {
		std::shared_ptr<Robot> r;
		std::shared_ptr<MilitaryIntelligence> r1;
		r1 = std::make_shared<MilitaryIntelligence>();
		r = std::dynamic_pointer_cast<Robot>(r1);
		return r;
	};
	~ConstructMI() {};
};

//ConcreteCreator 3
class ConstructMR : public ConstructRobot {
public:
	ConstructMR() {};
	shared_ptr<Robot> BuildIt() {
		std::shared_ptr<Robot> r;
		std::shared_ptr<MiningRobot> r1;
		r1 = std::make_shared<MiningRobot>();
		r = std::dynamic_pointer_cast<Robot>(r1);
		return r;
	};
	~ConstructMR() {};
};