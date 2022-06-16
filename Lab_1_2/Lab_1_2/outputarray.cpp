#include "Library.h"
#include "Prototypes.h"

void outputarray( int size, double* arr)
{
	cout << "sorted array: ";
	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}