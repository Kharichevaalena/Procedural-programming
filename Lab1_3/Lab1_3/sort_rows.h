#pragma once
#include "Library.h"
#include "Prototypes.h"
#include "TemplatesLibrary.h"

template <typename Type>

Type** sort_rows(Type* sum, int nrows, int ncols, Type** arr)
{
	Type temp_sum, temp_a;
	int nmin;

	for (int i = 0; i < nrows - 1; i++)
	{
		nmin = i;
		for (int j = i + 1; j < nrows; j++)
			if (sum[j] < sum[nmin]) nmin = j;

		temp_sum = sum[i];
		sum[i] = sum[nmin];
		sum[nmin] = temp_sum;

		for (int j = 0; j < ncols; j++)
		{
			temp_a = arr[i][j];
			arr[i][j] = arr[nmin][j];
			arr[nmin][j] = temp_a;
		}
	}

	return arr;
}
