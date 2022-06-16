#include "Library.h"
#include "Prototypes.h"

void output_matrix(int nrows, int ncols, int** arr)
{
	int sum = 0;

	for (int i = 0; i < nrows; i++) 
	{
		for (int j = 0; j < ncols; j++)
		{
			cout << arr[i][j] << " ";
			if(arr[i][j] > 0 && arr[i][j] % 2 == 0)
				sum += arr[i][j];
		}
		cout << "characteristic: " << sum;
		cout << endl;
		sum = NULL;
	}
}