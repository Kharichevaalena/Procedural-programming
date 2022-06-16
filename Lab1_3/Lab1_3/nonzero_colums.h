#pragma once
#include "Library.h"
#include "Prototypes.h"
#include "TemplatesLibrary.h"

template <typename Type>

int nonzero_colums(int ncol, int nrow, Type** arr)
{
	int count = 0;
	int without_zero = 0;

	for (int j = 0; j < ncol; j++)
	{
		for (int i = 0; i < nrow; i++)
		{
			if (arr[i][j] == 0)
				break;

			else without_zero++;
		}
		if (without_zero == nrow)
		{
			count++;
			cout << j + 1 << " row dont have 0" << endl;
		}
		without_zero = 0;

	}
	return count;
}
