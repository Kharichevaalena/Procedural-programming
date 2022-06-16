#pragma once
#include "TemplatesLibrary.h"
#include "Prototypes.h"
#include "Library.h"

template <typename Type>

void work_matrix(Type type)
{
	int nrow;
	int ncol;
	Type** arr = NULL;

	nrow = check_rows();
	ncol = check_columns();

	arr = new Type* [nrow]; //выделение памяти под массив
	for (int i = 0; i < nrow; i++)
		arr[i] = new Type[ncol];
	inputmatrix(nrow, ncol, arr);

	char mode_matrix;
	bool flag_matrix = true;
	cout << "we will do: " << endl;
	cout << "1 - In the matrix distribute the number of non-zero columns and rheir numbers " << endl;
	cout << "2 - Sort row by the sum of the half-even elemtnts " << endl;
	cout << "0 - turn back" << endl;

	while (flag_matrix == true)
	{
		cout << "input correct mode " << endl;

		bool check_matrix = true; // еще один вспомогательнй "флаг"
		while (check_matrix)
		{
			cin >> mode_matrix;

			if (mode_matrix > '2' || mode_matrix < '0' || (isdigit(mode_matrix) == false))
			{
				cout << "ERROR!! input once again " << endl;
				continue;
			}
			else check_matrix = false;
		}
		flag_matrix = false;
	}
	switch (mode_matrix)
	{
	case '1':
	{
		cout << "Total: " << nonzero_colums(ncol, nrow, arr) << " colums don't have zero" << endl;
		break;
	}
	case '2':
	{
		if (typeid(type) == typeid(int))
		{
			sort_characteristic(ncol, nrow, arr);
		}
		else
		{
			cout << "Unable to calculate characteristic with type double or float," << endl;
			cout << "because operand % is working only with integer! " << endl;
		}
		break;
	}
	case '0':
	{
		Main_menu();
		break;
	}
	}
}
