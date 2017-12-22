#pragma once
#ifndef ARRAYITEM_H
#define ARRAYITEM_H

#include "Pentagon.h"
#include "Rhombus.h"
#include "Trapeze.h"
#include <memory>

class ArrayItem
{
public:
	ArrayItem();
	ArrayItem(std::shared_ptr<Pentagon> &pentagon);
	ArrayItem(std::shared_ptr<Rhombus> &rhombus);
	ArrayItem(std::shared_ptr<Trapeze> &trapeze);

	bool IsPentagon();
	bool IsRhombus();
	bool IsTrapeze();

	std::shared_ptr<Pentagon> GetPentagon();
	std::shared_ptr<Rhombus> GetRhombus();
	std::shared_ptr<Trapeze> GetTrapeze();

	friend std::ostream& operator << (std::ostream &os, ArrayItem &item);
	virtual ~ArrayItem();

private:
	std::shared_ptr<Pentagon> pentagon;
	std::shared_ptr<Rhombus> rhombus;
	std::shared_ptr<Trapeze> trapeze;
};
#endif // ARRAYITEM_H