#include "Library.h"
#include "Prototypes.h"


int count_negative_elements(int size, double* arr)
{
	int count_neg = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] <= 0) 
			count_neg += 1;
	}
	return count_neg;
}