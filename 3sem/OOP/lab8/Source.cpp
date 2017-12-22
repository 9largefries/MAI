#include <iostream>
#include <cstdlib>
#include "FigureArray.cpp"
#include <future>

const int size = 10;

int main()
{
	int x = 6;
	int i;
	FigureArray <Pentagon, Rhomb, Trapeze> figure_array(size);


	while (true)
	{
		std::cout << "============================" << std::endl;
		std::cout << "Menu:\n1 - Add figure,\n2 - Print figure, \n3 - Delete, \n4 - Print all, \n5 - Sort, \n0 - Exit" << std::endl;
		std::cout << "============================" << std::endl;
		std::cout << "Enter command: ";
		std::cin >> x;

		if (x > 5)
		{
			std::cout << "============================" << std::endl;
			std::cout << "Incorrect command" << std::endl;
			continue;
		}

		if (x == 0)
			break;

		switch (x)
		{
		case 1:
		{
			std::cout << "============================" << std::endl;
			char figure_name;
			std::cout << "Enter figure name (p - pentagon, r - rhomb, t - trapeze): ";
			std::cin >> figure_name;
			std::cout << "Enter index: ";
			std::cin >> i;
			if (figure_name == 'p')
				figure_array.Insert(std::shared_ptr<Pentagon>(new Pentagon(std::cin)), i);
			else if (figure_name == 'r')
				figure_array.Insert(std::shared_ptr<Rhomb>(new Rhomb(std::cin)), i);
			else if (figure_name == 't')
				figure_array.Insert(std::shared_ptr<Trapeze>(new Trapeze(std::cin)), i);
			break;
		}

		case 2:
		{
			std::cout << "============================" << std::endl;
			std::cout << "Enter index: ";
			std::cin >> i;
			if (figure_array.IsPentagon(i))
				std::cout << *figure_array.GetPentagon(i) << std::endl;
			else if (figure_array.IsRhomb(i))
				std::cout << *figure_array.GetRhomb(i) << std::endl;
			else if (figure_array.IsTrapeze(i))
				std::cout << *figure_array.GetTrapeze(i) << std::endl;
			else std::cout << "Empty element" << std::endl;
			break;
		}

		case 3:
		{
			std::cout << "============================" << std::endl;
			std::cout << "Enter index: ";
			std::cin >> i;
			figure_array.Delete(i);
			break;
		}

		case 4:
		{
			std::cout << "============================" << std::endl;
			int j = 0;
			for (auto i : figure_array)
			{
				std::cout << "[" << j << "] " << *i << std::endl;
				j++;
			}
			break;
		}

		case 5:
		{
			std::cout << "============================" << std::endl;
			figure_array.QuickSortParallel(0, size - 1);
			std::cout << "Sorted" << std::endl;
			break;
		}
		}
	}
	return 0;
}