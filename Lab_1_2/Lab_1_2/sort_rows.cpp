#include "Library.h"
#include "Prototypes.h"

int** sort_rows(int* sum,int nrows, int ncols, int** arr)
{
	long temp_sum;
	int nmin, temp_a;

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