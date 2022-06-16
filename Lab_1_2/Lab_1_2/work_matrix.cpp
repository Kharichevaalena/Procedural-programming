#include "Library.h"
#include "Prototypes.h"

void work_matrix() 
{
	int nrow;
	int ncol;
	int** arr = NULL;

	nrow = check_rows();
	ncol = check_columns();

	arr = new int* [nrow]; //выделение памяти под массив
	for (int i = 0; i < nrow; i++)
		arr[i] = new int[ncol];
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
			sort_characteritic(ncol,nrow,arr);
			break;
		}
		case '0':
		{
			Main_menu();
			break;
		}
	}
}