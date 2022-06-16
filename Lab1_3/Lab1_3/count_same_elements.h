#pragma once
#include "Library.h"
#include "TemplatesLibrary.h"

template <typename Type>

int count_same_elements(int size, Type* arr)
{
	int count_double = 1;

	for (int i = 1; i < size; ++i)
		if (arr[i] == arr[0])
			count_double += 1;

	return count_double;
}
