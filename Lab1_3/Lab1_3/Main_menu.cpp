#include "Library.h"
#include "Prototypes.h"
#include "TemplatesLibrary.h"


void Main_menu()
{
	char mode;
	bool flag = true; //вспомогательный "флажок"

	cout << "_________________________" << endl;
	cout << "What do you want to do? " << endl;
	cout << "Select mode:" << endl;
	cout << "1 - Work with array " << endl;
	cout << "2 - Work with matrix " << endl;
	cout << "3 - Work with string " << endl;
	cout << "0 - exit" << endl;

	while (flag)
	{
		cout << "input correct mode " << endl;

		bool check = true; // еще один вспомогательнй "флаг"
		while (check)
		{
			cin >> mode;

			if (mode < '0' || mode > '3' || (isdigit(mode) == false))
			{
				cout << "input once again because you input incorrect mode" << endl;
				continue;
			}
			else
				check = false;
		}
		flag = false;
	}

	Enter_type(mode);
}