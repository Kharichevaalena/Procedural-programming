#pragma once
#include "Library.h"
#include "Prototypes.h"
#include "TemplatesLibrary.h"

template <typename Type>

void output_matrix(int nrows, int ncols, Type** arr)
{
	Type sum = 0;

	for (int i = 0; i < nrows; i++)
	{
		for (int j = 0; j < ncols; j++)
		{
			cout << arr[i][j] << " ";
			if (arr[i][j] > 0 && static_cast<int>(arr[i][j]) % 2 == 0)
				sum += arr[i][j];
		}
		cout << "characteristic: " << sum;
		cout << endl;
		sum = NULL;
	}
}
