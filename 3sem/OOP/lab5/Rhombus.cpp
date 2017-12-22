#include "Rhombus.h"
#include <iostream>
#include <cmath>

Rhombus::Rhombus(std::istream &is)
{
	std::cout << "Enter diagonal 1: ";
	is >> diagonal_1;
	std::cout << "Enter diagonal 2: ";
	is >> diagonal_2;
	std::cout << "Rhombus created" << std::endl;
}

std::ostream& operator << (std::ostream &os, const Rhombus &object)
{
	os << "diagonal 1 = " << object.diagonal_1 << " \n" << "diagonal 2 = " << object.diagonal_2;
	return os;
}

double Rhombus::Square()
{
	return diagonal_1*diagonal_2 / 2;
}

void Rhombus::Print()
{
	std::cout << "a = " << diagonal_1 << ", b = " << diagonal_2 << std::endl;
}

Rhombus::~Rhombus()
{
	std::cout << "Rhombus deleted" << std::endl;
}