#include "Library.h"
#include "Prototypes.h"

void inputmatrix(int nrow, int ncol, int** arr) 
{
	for (int i = 0; i < nrow; i++)  //ввод массива
		for (int j = 0; j < ncol; j++)
			cin >> arr[i][j];
}