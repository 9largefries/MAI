#include "Rhomb.h"
#include <iostream>
#include <cmath>

Rhomb::Rhomb(std::istream &is)
{
	std::cout << "Enter diagonal 1: ";
	is >> diagonal_1;
	std::cout << "Enter diagonal 2: ";
	is >> diagonal_2;
	std::cout << "Rhomb created" << std::endl;
}

std::ostream& operator << (std::ostream &os, const Rhomb &object)
{
	os << "Diagonal 1 = " << object.diagonal_1 << " \n" << "Diagonal 2 = " << object.diagonal_2;
	return os;
}

double Rhomb::Square()
{
	return diagonal_1*diagonal_2 / 2;
}

void Rhomb::Print()
{
	std::cout << "a = " << diagonal_1 << ", b = " << diagonal_2 << std::endl;
}

Rhomb::~Rhomb()
{
	std::cout << "Rhomb deleted" << std::endl;
}