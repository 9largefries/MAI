#pragma once
#ifndef FArray_H
#define FArray_H

#include "Trapeze.h"
#include "Pentagon.h"
#include "Rhombus.h"
#include "ArrayItem.h"
#include <memory>

const int size = 10; 

class FArray
{
public:
	FArray(); 
	void Insert(std::shared_ptr<Pentagon> &pentagon, int index);
	void Insert(std::shared_ptr<Rhombus> &rhombus, int index);
	void Insert(std::shared_ptr<Trapeze> &trapeze, int index);

	bool IsPentagon(int index);
	bool IsRhombus(int index);
	bool IsTrapeze(int index);

	std::shared_ptr<Pentagon> GetPentagon(int index);
	std::shared_ptr<Rhombus> GetRhombus(int index);
	std::shared_ptr<Trapeze> GetTrapeze(int index);

	void Delete(int index);
	friend std::ostream& operator << (std::ostream &os, FArray &array);
	virtual ~FArray(); 

private:
	ArrayItem a[size];
};
#endif