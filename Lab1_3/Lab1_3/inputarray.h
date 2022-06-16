#pragma once
#include "Library.h"
#include "TemplatesLibrary.h"
#include "Prototypes.h"

template <typename Type>

void inputarray(int size, Type* arr)
{
	cout << "input the array: " << endl;
	for (int i = 0; i < size; i++)
		cin >> arr[i];
}