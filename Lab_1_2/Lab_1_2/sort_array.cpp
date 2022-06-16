#include "Library.h"
#include "Prototypes.h"

void sort_array(int size, double* arr)
{
	int same_elements;
	double* new_arr = NULL;

	same_elements = count_same_elements(size, arr);

	new_arr = sort_by_choice(same_elements, size, arr);

	outputarray(size, new_arr);

	delete[] new_arr;
}