#include <iostream>
#include "Array.h"
#include "Trapeze.h"

using namespace std;

int main() {
	Trapeze qe;
	Array m(5); 
	int num, n;

	while (true)
	{
		cout << "==========================" << endl;
		cout << "Menu: " << endl;
		cout << "1) Add trapeze" << endl;
		cout << "2) Delete trapeze" << endl;
		cout << "3) Print" << endl;
		cout << "4) Exit" << endl;
		cout << "==========================" << endl;

		cout << "Choose action: " << endl;
		cin >> num;
		cin.ignore();

		if (num == 4)
			break;

		if (num > 3)
		{
			cout << "Error, put another number" << endl;
			continue;
		}

		switch (num)
		{
		case 1:
		{
			cout << "==========================" << endl;
			cout << "You chose 1) Add trapeze" << endl;

			cin >> qe;
			m.push(qe);

			break;
		}

		case 2:
		{
			cout << "==========================" << endl;
			cout << "You chose 2) Delete" << endl;
			
			cout << "Enter trapeze number = ";
			cin >> n;

			m.del(n);

			break;
		}

		case 3:
		{
			cout << "==========================" << endl;
			cout << m << endl;

			break;
		}
		}
	}
	
	return 0;
}