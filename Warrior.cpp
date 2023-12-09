#include "Warrior.h"



std::string WarriorBase::CauseDamage()
{
	auto damage = static_cast<LevelWarrior>(m_level);

	std::cout << "Damage to enemy: ";

	switch (damage)
	{
	case LevelWarrior::LEVEL_1:
		return std::to_string(m_damage += 3);
		break;
	case LevelWarrior::LEVEL_2:
		return std::to_string(m_damage += 5);
		break;
	case LevelWarrior::LEVEL_3:
		return std::to_string(m_damage += 7);
		break;
	case LevelWarrior::LEVEL_4:
		return std::to_string(m_damage += 9);
		break;
	case LevelWarrior::LEVEL_5:
		return std::to_string(m_damage += 11);
		break;
	case LevelWarrior::LEVEL_6:
		return std::to_string(m_damage += 13);
		break;
	case LevelWarrior::LEVEL_7:
		return std::to_string(m_damage += 15);
		break;
	default:
		return "";
		break;
	}
}

std::string WarriorBase::TakeDamage()
{
	auto protection = static_cast<LevelWarrior>(m_level);

	std::cout << "Health left: ";

	switch (protection)
	{
	case LevelWarrior::LEVEL_1:
		return std::to_string(m_hp -= 15);
		break;
	case LevelWarrior::LEVEL_2:
		return std::to_string(m_hp -= 13);
		break;
	case LevelWarrior::LEVEL_3:
		return std::to_string(m_hp -= 11);
		break;
	case LevelWarrior::LEVEL_4:
		return std::to_string(m_hp -= 9);
		break;
	case LevelWarrior::LEVEL_5:
		return std::to_string(m_hp -= 7);
		break;
	case LevelWarrior::LEVEL_6:
		return std::to_string(m_hp -= 5);
		break;
	case LevelWarrior::LEVEL_7:
		return std::to_string(m_hp -= 3);
		break;
	default:
		return "";
		break;
	}
	
}

