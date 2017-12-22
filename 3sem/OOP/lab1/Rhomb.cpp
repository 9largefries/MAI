#include "Rhomb.h"

#include <iostream>
#include <cmath>

Rhomb::Rhomb() : Rhomb(0, 0)
{
}

Rhomb::Rhomb(size_t i, size_t j) : side(i), height(j)
{
	std::cout << "==========================" << std::endl;
	std::cout << "Rhomb created: " << std::endl;
	std::cout << "side = " << side << std::endl;
	std::cout << "height = " << height << std::endl;
}

Rhomb::Rhomb(std::istream &is)
{
	std::cout << "==========================" << std::endl;
	std::cout << "Enter side: ";
	is >> side;
	std::cout << "Enter height: ";
	is >> height;
}

Rhomb::Rhomb(const Rhomb& orig)
{
	std::cout << "Rhomb copy created" << std::endl;
	side = orig.side;
	height = orig.height;
}

double Rhomb::Square()
{
	return double(side) * double(height);
}

void Rhomb::Print()
{
	std::cout << "==========================" << std::endl;
	std::cout << "Figure type - Rhomb " << std::endl;
	std::cout << "Size of side: " << side << std::endl;
	std::cout << "Height: " << height << std::endl;
}

Rhomb::~Rhomb()
{
	std::cout << "==========================" << std::endl;
	std::cout << "Rhomb deleted" << std::endl;
}