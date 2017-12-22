#pragma once
#ifndef ALLOCATIONBLOCK_H
#define ALLOCATIONBLOCK_H

class AllocationBlock
{
public:
	AllocationBlock();
	AllocationBlock(size_t s, size_t c);

	void *allocate(); // выделяет один блок памяти и возвращает указатель на следующий свободный блок
	void deallocate(void *pointer); // освобождает один блок памяти

	bool HasFreeBlocks(); // проверяет, есть ли свободные блоки

	virtual ~AllocationBlock();
private:
	size_t size; // размер блока
	size_t count; // число блоков

	char* used_blocks; // адрес свободного блока
	void** free_blocks; // указатель на адрес свободного блока

	size_t free_count; // номер последнего свободного блока

};

#endif