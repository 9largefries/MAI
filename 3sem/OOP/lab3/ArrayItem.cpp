#include "ArrayItem.h"

ArrayItem::ArrayItem() : pentagon(nullptr), rhombus(nullptr), trapeze(nullptr) {}

ArrayItem::ArrayItem(std::shared_ptr<Pentagon> &pentagon) : pentagon(pentagon), rhombus(nullptr), trapeze(nullptr) {}

ArrayItem::ArrayItem(std::shared_ptr<Rhombus> &rhombus) : pentagon(nullptr), rhombus(rhombus), trapeze(nullptr) {}

ArrayItem::ArrayItem(std::shared_ptr<Trapeze> &trapeze) : pentagon(nullptr), rhombus(nullptr), trapeze(trapeze) {}

ArrayItem::~ArrayItem() {}

bool ArrayItem::IsPentagon()
{
	if (pentagon != nullptr) return true;
	else return false;
}

bool ArrayItem::IsRhombus()
{
	if (rhombus != nullptr) return true;
	else return false;
}

bool ArrayItem::IsTrapeze()
{
	if (trapeze != nullptr) return true;
	else return false;
}

std::shared_ptr<Pentagon> ArrayItem::GetPentagon()
{
	return this->pentagon;

}

std::shared_ptr<Rhombus> ArrayItem::GetRhombus()
{
	return this->rhombus;
}

std::shared_ptr<Trapeze> ArrayItem::GetTrapeze()
{
	return this->trapeze;
}

std::ostream& operator << (std::ostream &os, ArrayItem &item)
{
	if (item.IsPentagon()) 
		os << *item.pentagon << " (I am pentagon)";
	else if (item.IsRhombus()) 
		os << *item.rhombus << " (I am rhombus)";
	else if (item.IsTrapeze()) 
		os << *item.trapeze << " (I am trapeze)";
	else 
		os << "empty";
	return os;
}