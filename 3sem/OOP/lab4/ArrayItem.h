#pragma once
#ifndef ARRAYITEM_H
#define ARRAYITEM_H

#include "Pentagon.h"
#include "Rhomb.h"
#include "Trapeze.h"
#include <memory>

template <class T1, class T2, class T3>
class ArrayItem
{
public:
	ArrayItem();
	ArrayItem(std::shared_ptr<T1> &pentagon);
	ArrayItem(std::shared_ptr<T2> &rhomb);
	ArrayItem(std::shared_ptr<T3> &trapeze);

	bool IsPentagon();
	bool IsRhomb();
	bool IsTrapeze();

	std::shared_ptr<T1> GetPentagon();
	std::shared_ptr<T2> GetRhomb();
	std::shared_ptr<T3> GetTrapeze();

	template <class T1, class T2, class T3> friend std::ostream& operator << (std::ostream &os, ArrayItem<T1, T2, T3> &item);

	virtual ~ArrayItem();

private:
	std::shared_ptr<T1> pentagon;
	std::shared_ptr<T2> rhomb;
	std::shared_ptr<T3> trapeze;
};

#endif // ARRAYITEM_H