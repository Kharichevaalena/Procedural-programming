#include "Library.h"
#include "Prototypes.h"

void sort_characteritic(int ncols, int nrows, int ** arr)
{
	int count = 0;
	int character = 1;
	int* sum = NULL;

	sum = new int[nrows]; //масив сумм строк
	for (int i = 0; i < nrows; i++) 
	{
		sum[i] = 0;
		for (int j = 0; j < ncols; j++) 
			if (arr[i][j] > 0 && arr[i][j] % 2 == 0) 
				sum[i] += arr[i][j];
	}
	
	for (int i = 0; i < nrows; ++i)
	{
		if (sum[i] == 0) 
			++count;
		else
			if (sum[i] == sum[i++]) 
				++character;
	}

	if (count == nrows) 
		cout << "In matrix not found positive and even number" << endl;
	if (character == nrows) 
		cout << "Characteristic all of rows is same" << endl;
	if(count != nrows && character != nrows)
	{
		sort_rows(sum, nrows, ncols, arr);
		output_matrix(nrows, ncols, arr);
	}
}