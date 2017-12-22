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
	NTree(); // �����������
	TreeItem<T>* Insert(TreeItem<T>* root, T value); // �������

	TreeItem<T>* root;
	int size;

private:
};
#endif