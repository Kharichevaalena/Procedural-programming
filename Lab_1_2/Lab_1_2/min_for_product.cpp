#include "Library.h"
#include "Prototypes.h"

int min_for_product(int size, double* arr)
{
	int min = 0;
	int count = 0;
	int ind, i = 0;
	bool check = true;
	int* new_arr = NULL;
	new_arr = new int[size];

	for (int i = 0; i < size; i++)
		if (abs(arr[i]) < abs(arr[min]))
			min = i;
	for (int j = 0; j < size; j++)
		if (abs(arr[min]) == abs(arr[j]))
		{
			count++;
			new_arr[i] = j;
			i++;
		}

	if (count == size - 1 || count > 1)
	{
		cout << "Array has min elements are same.Choice number of min element: " << endl;
		for (int k = 0; k < i; ++k)
			cout << new_arr[k] << " ";
		cout << endl;
		while (check == true)
		{
			cin >> ind;
			for (int k = 0; k < i; ++k)
			{
				if (ind == new_arr[k])
				{
					min = ind;
					check = false;
				}
			}
			if (check == true)
			cout << "this index does not exist" << endl;
		}
	}
	
	return min;
}