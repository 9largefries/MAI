#pragma once
#ifndef TREEITEM_H
#define TREEITEM_H

#include <thread>

const int max_children_size = 4; // максимальное число детей

template <class T>
class TreeItem
{
public:
	// конструкторы
	TreeItem();
	TreeItem(T v);

	bool IsLeaf(); // проверка, является ли листом

	T value; // значение
	TreeItem<T>* children[max_children_size]; // массив указателей на детей

private:
};
#endif