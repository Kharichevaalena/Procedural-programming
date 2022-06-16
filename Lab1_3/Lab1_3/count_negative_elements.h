#pragma once
#include "Library.h"
#include "TemplatesLibrary.h"

template <typename Type>

int count_negative_elements(int size, Type* arr)
{
	int count_neg = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] <= 0)
			count_neg += 1;
	}
	return count_neg;
}
