#include "Trapeze.h"
#include <iostream>
#include <cmath>
Trapeze::Trapeze(std::istream &is)
{
	std::cout << "Enter base 1: ";
	is >> base_1;
	std::cout << "Enter base 2: ";
	is >> base_2;
	std::cout << "Enter height: ";
	is >> height;
	std::cout << "Trapeze created" << std::endl;
}
Trapeze::Trapeze(size_t a, size_t b, size_t c) : base_1(a), base_2(b), height(c)
{
	std::cout << "Trapeze created" << std::endl;
}
std::ostream& operator << (std::ostream &os, const Trapeze &object)
{
	os << "base 1 = " << object.base_1 << " \n" << "base 2 = " << object.base_2 << " \n" << "height = " << object.height;
	return os;
}
double Trapeze::Square()
{
	return (base_1 + base_2)*height / 2;
}
void Trapeze::Print()
{
	std::cout << "a = " << base_1 << ", b = " << base_2 << ", h = " << height << std::endl;
}
Trapeze::~Trapeze()
{
	std::cout << "Trapeze deleted" << std::endl;
}