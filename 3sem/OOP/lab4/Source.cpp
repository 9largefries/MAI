#include <iostream>
#include <cstdlib>
#include "FigureArray.cpp"

int main()
{
	int x;
	int i ;
	FigureArray <Pentagon, Rhomb, Trapeze> figure_array(10);

	while (true)
	{
		std::cout << "============================" << std::endl;
		std::cout << "Menu:\n1 - Add figure,\n2 - Print figure, \n3 - Delete, \n4 - Print array, \n0 - Exit" << std::endl;
		std::cout << "============================" << std::endl;
		std::cout << "Enter command: ";
		std::cin >> x;

		switch (x)
		{
		case 1:
		{
			std::cout << "============================" << std::endl;
			char figure_name;
			std::cout << "Enter figure name (p-pentagon, r-rhomb, t-trapeze): ";
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
			if (figure_array.IsPentagon(i)) std::cout << *figure_array.GetPentagon(i) << std::endl;
			else if (figure_array.IsRhomb(i)) std::cout << *figure_array.GetRhomb(i) << std::endl;
			else if (figure_array.IsTrapeze(i)) std::cout << *figure_array.GetTrapeze(i) << std::endl;
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
			std::cout << "Figure array:\n" << figure_array;
			break;
		}
		case 0:
			return 0;
		}
		
	}
	
	//system("pause");

	return 0;
}