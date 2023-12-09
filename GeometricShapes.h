#pragma once

#include <iostream>
#include <string>

#define _USE_MATH_DEFINES
#include <math.h>


enum class InnerAngles
{
	INNER_ANGLE_A,
	INNER_ANGLE_B,
	INNER_ANGLE_C
};

class GeometricShapes
{
public:

	double Square(double value)
	{
		return value * value;
	}

	virtual double Perimeter() { return 0.00; }
	virtual double Area() { return 0.00; }

};

class ShapeTriangle : public GeometricShapes
{

public:

	ShapeTriangle(double a, double b, double c) :
	m_side1(a),
	m_side2(b),
	m_side3(c) {}

	bool DrawTriangle();

	double InnerAngle(InnerAngles);

	double Perimeter()  override { return m_side1 + m_side2 + m_side3; }

	double Area() override
	{
		double halfPerimeter = Perimeter() / 2.00;
		std::cout << "Area triangle: ";
		return sqrt(halfPerimeter * (halfPerimeter - m_side1) * (halfPerimeter - m_side2) * (halfPerimeter - m_side3));
	}

private:
	double m_side1{};
	double m_side2{};
   double m_side3{};

};

class ShapeSquare : public GeometricShapes
{
public:
	ShapeSquare(double side) :
		m_side(side) {}

	double Area() override 
	{ 
		std::cout << "Aria square: ";
		return Square(m_side); 
	}
	double Perimeter() override { return quantitySide * m_side; }

	double AreaCircleInSquare()
	{
		double radial = m_side / 2;
		std::cout << "Aria of the inscribed circle in a square: ";
		return M_PI * Square(radial);
	}

private:

	int quantitySide{4};
	double m_side{};

};

