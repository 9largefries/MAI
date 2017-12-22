#include "Pentagon.h"

#include <iostream>
#include <cmath>

Pentagon::Pentagon() : Pentagon(0, 0, 0, 0, 0, 0)
{
}

Pentagon::Pentagon(size_t i, size_t j, size_t k, size_t l, size_t m, size_t a) : side1(i), side2(j), side3(k), side4(l), side5(m), apothem(a)
{
	std::cout << "==========================" << std::endl;
	std::cout << "Pentagon created: " << std::endl;
	std::cout << "side 1 = " << side1 << std::endl;
	std::cout << "side 2 = " << side2 << std::endl;
	std::cout << "side 3 = " << side3 << std::endl;
	std::cout << "side 4 = " << side4 << std::endl;
	std::cout << "side 5 = " << side5 << std::endl;
	std::cout << "apothem = " << apothem << std::endl;
}

Pentagon::Pentagon(std::istream &is)
{
	std::cout << "==========================" << std::endl;
	std::cout << "Enter side 1: ";
	is >> side1;
	std::cout << "Enter side 2: ";
	is >> side2;
	std::cout << "Enter side 3: ";
	is >> side3;
	std::cout << "Enter side 4: ";
	is >> side4;
	std::cout << "Enter side 5: ";
	is >> side5;
	std::cout << "Enter apothem: ";
	is >> apothem;
}

Pentagon::Pentagon(const Pentagon& orig)
{
	std::cout << "Pentagon copy created" << std::endl;
	side1 = orig.side1;
	side2 = orig.side2;
	side3 = orig.side3;
	side4 = orig.side4;
	side5 = orig.side5;
	apothem = orig.apothem;
}

double Pentagon::Square()
{
	return (double(side1 + side2 + side3 + side4 + side5) / 2.0) * double(apothem);
}

void Pentagon::Print()
{
	std::cout << "==========================" << std::endl;
	std::cout << "Figure type - Pentagon " << std::endl;
	std::cout << "Size of side 1: " << side1 << std::endl;
	std::cout << "Size of side 2: " << side2 << std::endl;
	std::cout << "Size of side 3: " << side3 << std::endl;
	std::cout << "Size of side 4: " << side4 << std::endl;
	std::cout << "Size of side 5: " << side5 << std::endl;
	std::cout << "Size of apothem: " << apothem << std::endl;
}

Pentagon::~Pentagon()
{
	std::cout << "==========================" << std::endl;
	std::cout << "Pentagon deleted" << std::endl;
}