#include "Library.h"
#include "Prototypes.h"

void work_array() 
{
	char mode_array;
	bool flag_array = true; //вспомогательный "флажок"
	double* arr = NULL;
	int size;
	double arraysum;
	double prodmaxmin;
	size = check_size();
	arr = new double[size];

	inputarray(size, arr);

	cout << "Choice that we will do: " << endl;
	cout << "1 - Sum of positive elements of array, their count and coordinates " << endl;
	cout << "2 - Product of array elements between |max| and |min| " << endl;
	cout << "3 - Sort the elements of array descending " << endl;
	cout << "0- turn back" << endl;

	while (flag_array)
	{
		cout << "input correct mode " << endl;

		bool check_array = true; // еще один вспомогательнй "флаг"
		while (check_array)
		{
			cin >> mode_array;
			if (mode_array < '0' || mode_array > '3' || (isdigit(mode_array) == false))
			{
				cout << "input once again because you input incorrect mode" << endl;
				continue;
			}
			else
				check_array = false;
		}
		flag_array = false;
	}

	switch (mode_array) 
	{
		case '1': 
		{
			arraysum = array_sum(size, arr);
			cout << "Sum of positive elements of array: " << arraysum << endl;
			break;
		}
		case '2': 
		{
			
			prodmaxmin = Prod_max_min(size, arr);
			cout << "Product of array elements between |max| and |min|: " << prodmaxmin << endl;
			break;
		}
		case '3': 
		{
			sort_array(size, arr);
			break;
		}
		case '0':
		{
			Main_menu();
			break;
		}
	}
}