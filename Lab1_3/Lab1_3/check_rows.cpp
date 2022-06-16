#include "Library.h"
#include "Prototypes.h"

int check_rows()
{
	bool flag_size = true;
	int row;
	bool check;

	while (flag_size)
	{
		cout << "input number of rows " << endl;

		check = true;
		while (check)
		{
			cin >> row;

			if (cin.fail() || row < 1)
			{
				cin.clear();
				while (cin.get() != '\n');
				cout << "input once again because you input incorrect size" << endl;
				continue;
			}
			else
				check = false;
		}
		flag_size = false;
	}
	return row;
}