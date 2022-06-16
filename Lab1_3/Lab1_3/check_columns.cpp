#include "Library.h"
#include "Prototypes.h"

int check_columns()
{
	bool flag_size = true;
	int column;
	bool check;

	while (flag_size)
	{
		cout << "input number of columns " << endl;

		check = true;
		while (check)
		{
			cin >> column;

			if (cin.fail() || column < 1)
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
	return column;
}