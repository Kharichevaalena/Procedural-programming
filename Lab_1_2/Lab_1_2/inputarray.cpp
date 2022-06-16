#include "Library.h"
#include "Prototypes.h"

void inputarray(int size, double* arr) 
{
	cout << "input the array: " << endl;
	for (int i = 0; i < size; i++)
		cin >> arr[i];
}