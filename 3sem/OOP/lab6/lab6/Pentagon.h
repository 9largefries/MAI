﻿#pragma once
#ifndef PENTAGON_H
#define PENTAGON_H

#include <cstdlib>
#include <iostream>

#include "Figure.h"

class Pentagon : public Figure
{
public:
	Pentagon(std::istream &is); 
	friend std::ostream& operator << (std::ostream &os, const Pentagon &object); // перегрузка оператора вывода в поток ostream
	double Square() override;
	void Print() override;
	virtual ~Pentagon();
private:
	size_t side; 
	size_t diagonal;
	size_t height_1; 
	size_t height_2; 
};
#endif PENTAGON_H