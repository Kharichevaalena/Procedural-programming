#pragma once
#include "Library.h"
#include "TemplatesLibrary.h"
#include "Prototypes.h"

template <typename Type>

void outputarray(int size, Type* arr)
{
	cout << "sorted array: ";
	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	delete[] arr;
}