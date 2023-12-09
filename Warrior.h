#pragma once
#include <string>
#include <iostream>
#include <vector>

enum class LevelWarrior
{
	LEVEL_1 = 1,
	LEVEL_2,
	LEVEL_3,
	LEVEL_4,
	LEVEL_5,
	LEVEL_6,
	LEVEL_7
};

class WarriorBase 
{
public:
	WarriorBase() {};
	WarriorBase(const std::string& name, int level) :
		m_name(name),
		m_level(level) {}

	std::ostream& operator<<(std::ostream& stream) {};

	int AddScillsForRecruit() { return ++m_level; }

	std::string CauseDamage();

	std::string TakeDamage();


protected:

	int m_hp{100};
	int m_damage{0};
	std::string m_name{""};
	int m_level{1};

};


class Infantry : public WarriorBase
{
public:
	Infantry(const std::string& name, int level) :
		WarriorBase(name, level) {}

	std::string TeamProtection(const std::string& nameRecruit) 
	{ 
		return nameRecruit + " " + std::to_string(m_hp += 3) + " keep in line !";
	}

};


class Archer : public WarriorBase
{
public:
	Archer(const std::string& name, int level) :
		WarriorBase(name, level) {}

	std::string TeamDamage(const std::string& enemy) 
	{ 
		if (m_level >= 3)
		{
			return  enemy + " " + std::to_string(m_hp -= 100) + " hp" + " enemy destroyed !";
		}
		else
		{
			return "To enter the squad you need to level up !";
		}

	}
	
};