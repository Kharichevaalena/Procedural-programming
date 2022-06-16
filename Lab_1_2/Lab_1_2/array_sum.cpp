#include "Library.h"
#include "Prototypes.h"

double array_sum(int size, double* arr) 
{
	int negative = 0;
	double SUM;

	negative = count_negative_elements(size, arr);
	SUM = mode_of_output(negative, size, arr);

	return SUM;
}