#include "Library.h"
#include "Prototypes.h"

double* sort_by_choice(int same_elements, int size, double* arr)
{

	int min_ind;
	double min_value;
	double* new_arr = new double[size];

	if (same_elements == size) cout << "all of elements are same" << endl;
	else
	{
		for (int i = 0; i < size; ++i)
			new_arr[i] = arr[i];

		for (int i = 0; i < size - 1; ++i)
		{
			min_ind = i;                       //сортировка выбором
			min_value = new_arr[i];
			for (int j = i + 1; j < size; ++j)
			{
				if (new_arr[j] < min_value)
				{
					min_ind = j;
					min_value = new_arr[j];
				}
			}
			new_arr[min_ind] = new_arr[i];
			new_arr[i] = min_value;
		}
	}
	return new_arr;
}