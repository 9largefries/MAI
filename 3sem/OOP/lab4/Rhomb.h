#pragma once
#ifndef Rhomb_H
#define Rhomb_H

#include <cstdlib>
#include <iostream>
#include "Figure.h"

class Rhomb : public Figure
{
public:
	Rhomb(std::istream &is); 
	friend std::ostream& operator << (std::ostream &os, const Rhomb &object);
	double Square() override;
	void Print() override;
	virtual ~Rhomb();

private:
	size_t diagonal_1;
	size_t diagonal_2;
};

#endif Rhomb_H