#pragma once
#include "Library.h"
#include "TemplatesLibrary.h"

template <typename Type>

Type Prod_max_min(int size, Type* arr)
{
	Type product;
	bool flag = false;
	int indx_max = 0;
	int indx_min = 0;

	indx_max = max_for_product(size, arr);
	indx_min = min_for_product(size, arr);

	if (abs(indx_max - indx_min) > 2)
	{
		product = count_product(indx_max, indx_min, arr);
		flag = true;
	}
	else
		if (indx_max == indx_min)
			product = 99999;
		else
			if (abs(indx_max - indx_min) == 1)
				product = 999999;
			else
				product = 9999999;

	return product;
}
