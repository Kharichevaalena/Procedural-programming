#include "Library.h"
#include "Prototypes.h"

int count_same_elements(int size, double* arr)
{
	int count_double = 1;

	for (int i = 1; i < size; ++i)
		if (arr[i] == arr[0])
			count_double += 1;

	return count_double;
}