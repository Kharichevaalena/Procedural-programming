#include "Library.h"
#include "Prototypes.h"

double mode_of_output(int negative, int size, double* arr)
{
	double sum = 0;
	int count = 0;

	if (negative == size) cout << "it's imposible to calc the sum of 0 positive elements" << endl;
	if (negative == size - 1) cout << "it's imposible to calc the sum of 1 element" << endl;

	if (negative != size && negative != size - 1)
	{
		for (int i = 0; i < size; ++i)
		{
			if (arr[i] > 0)
			{
				sum += arr[i];
				++count;
				cout << "index of positive element is: " << i << endl;
			}
		}
		cout << "Count of positive elements in array: " << count << endl;
	}
	return sum;
}