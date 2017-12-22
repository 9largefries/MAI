#pragma once
#ifndef NTREE_H
#define NTREE_H

#include <memory>
#include <future>
#include <mutex>
#include <thread>
#include "TreeItem.h"

template <class T>
class NTree
{
public:
	NTree(); // конструктор
	TreeItem<T>* Insert(TreeItem<T>* root, T value); // вставка

	TreeItem<T>* root;
	int size;

private:
};
#endif