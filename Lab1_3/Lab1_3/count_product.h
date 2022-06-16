#pragma once
#include "TemplatesLibrary.h"
#include "Library.h"

template <typename Type>

Type count_product(int indx_max, int indx_min, Type* arr)
{
	Type pr = 1;

	if (indx_max > indx_min)
		for (int i = indx_min + 1; i < indx_max; i++)
			pr *= arr[i];
	else
		for (int i = indx_max + 1; i < indx_min; i++)
			pr *= arr[i];
	return pr;
}
