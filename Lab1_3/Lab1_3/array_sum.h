#pragma once
#include "Library.h"
#include "TemplatesLibrary.h"

template <typename Type>

Type array_sum(int size, Type* arr)
{
	int negative = 0;
	Type SUM;

	negative = count_negative_elements(size, arr);
	SUM = mode_of_output(negative, size, arr);

	return SUM;
}
