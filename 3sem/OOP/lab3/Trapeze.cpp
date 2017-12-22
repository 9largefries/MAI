#include "Trapeze.h"
#include <iostream>
#include <cmath>

Trapeze::Trapeze(std::istream &is)
{
	std::cout << "Enter side a: ";
	is >> base_1;
	std::cout << "Enter side b: ";
	is >> base_2;
	std::cout << "Enter height: ";
	is >> height;
	std::cout << "Trapeze created" << std::endl;
}

std::ostream& operator << (std::ostream &os, const Trapeze &object)
{
	os << "Side a = " << object.base_1 << std::endl;
	os << "Side b = " << object.base_2 << std::endl;
	os << "Height = " << object.height;
	return os;
}

double Trapeze::Square()
{
	return (base_1 + base_2)*height / 2;
}

void Trapeze::Print()
{
	std::cout << "a = " << base_1 << ", b =" << base_2 << ", h = " << height << std::endl;
}

Trapeze::~Trapeze()
{
	std::cout << "Trapeze deleted" << std::endl;
}