#pragma once
#include "Library.h"
#include "Prototypes.h"
#include "TemplatesLibrary.h"

template <typename Type>

void inputmatrix(int nrow, int ncol, Type** arr)
{
	cout << "Input matrix" << endl;
	for (int i = 0; i < nrow; i++)  //ввод массива
		for (int j = 0; j < ncol; j++)
			cin >> arr[i][j];
}
