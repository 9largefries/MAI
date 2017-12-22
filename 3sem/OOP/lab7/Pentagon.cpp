#include "Pentagon.h"
#include <iostream>
#include <cmath>

Pentagon::Pentagon(std::istream &is)
{
	std::cout << "Enter side a: ";
	is >> side;
	std::cout << "Enter side b: ";
	is >> diagonal;
	std::cout << "Enter height 1: ";
	is >> height_1;
	std::cout << "Enter height 2: ";
	is >> height_2;
	std::cout << "Pentagon created" << std::endl;
}

std::ostream& operator << (std::ostream &os, const Pentagon &object)
{
	os << "side = " << object.side << " \n" << "diagonal = " << object.diagonal << " \n" << "height 1 = " << object.height_1 << " \n" << "height 2 = " << object.height_2;
	return os;
}

double Pentagon::Square()
{
	return (side + diagonal)*height_1 / 2 + height_2*diagonal / 2;
}

void Pentagon::Print()
{
	std::cout << "a = " << side << ", b = " << diagonal << ", h1 = " << height_1 << ", h2 = " << height_2 << std::endl;
}
Pentagon::~Pentagon()
{
	std::cout << "Pentagon deleted" << std::endl;
}