#include "Library.h"
#include "Prototypes.h"

int check_size()
{
	bool flag_size = true;
	int size;
	bool check;

	while (flag_size)
	{
		cout << "input size of array " << endl;

		check = true;
		while (check)
		{
			cin >> size;

			if (cin.fail() || size < 1)
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
	return size;
}