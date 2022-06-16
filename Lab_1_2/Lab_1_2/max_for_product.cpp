#include "Library.h"
#include "Prototypes.h"

int max_for_product(int size, double* arr)
{
	int max = 0;
	int index, i = 0;
	int count = 0;
	bool check = true;
	int* new_arr = NULL;
	new_arr = new int[size];

	for (int i = 0; i < size; i++)
		if (abs(arr[i]) > abs(arr[max]))
			max = i;

	
	for (int j = 0; j < size; j++)
		if (abs(arr[j]) == abs(arr[max]))
		{
			count++;
			new_arr[i] = j;
			i++;
		}
	
	if (count == size  || count > 1)
	{
		cout << "Array has max elements are same. Choice number of max element: " << endl;
		for (int k = 0; k < i ; ++k)
			cout << new_arr[k] << " ";
		cout << endl;
		while (check == true)
		{
			cout << "input index: " << endl;
			cin >> index;
			for (int k = 0; k < i; ++k)
			{
				if (index == new_arr[k])
				{
					max = index;
					check = false;
				}
			}
			if (check == true)
			cout << "this index does not exist" << endl;
		}
	}

	return max;
}