#pragma once
#include <string>
#include <iostream>


class BaseRailwayCarriage {

public:

	BaseRailwayCarriage(int weight, const std::string& content) : 
		m_weight(weight), m_content(content) {}

	std::string GetWeightContent() 
	{
		return "Total weight: " + std::to_string(m_weight) + "kg, Content: " + m_content;
	}

	virtual std::string ReportSafity()
	{
		return "Safity Cargo ";
	}
protected:
	int m_weight{};
	std::string m_content{};
};

class DryCargoCarriage : public BaseRailwayCarriage {
public:
	DryCargoCarriage(int weight, std::string content) : 

		BaseRailwayCarriage(weight, content) {}

	std::string AddBoxes(int m_quantityBoxes) 
	{
		return "Added " + std::to_string(m_quantityBoxes) + " boxes of goods to the dry cargo carriage";
	}

private:
	int m_quantityBoxes{};
};

class ContainerCarriage : public BaseRailwayCarriage {
public:
	ContainerCarriage(int weight, std::string content) :

		BaseRailwayCarriage(weight, content) {}

	std::string AddLiquid(int volume) {
		return "Added " + std::to_string(volume) + " liters of liquid to the container";
	}

	std::string ReportSafity() override {
		return "Warning hazardous cargo !!!";
	}
};

