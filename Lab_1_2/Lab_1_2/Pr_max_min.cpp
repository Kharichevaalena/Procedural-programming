#include "Library.h"
#include "Prototypes.h"

double Prod_max_min(int size, double* arr) 
{
	double product;
	bool flag = false;
	int indx_max;
	int indx_min;
	
	while (flag == false)
	{
		indx_max = max_for_product(size, arr);
		indx_min = min_for_product(size, arr);

		if (abs(indx_max - indx_min) > 2)
		{
			product = count_product(indx_max, indx_min, arr);
			flag = true;
		}
		else
		{
			if (indx_max == indx_min)
			{
				cout << "You input the max and min values so that is the superposition" << endl;
				cout << "Its impossible to calc the sum" << endl << endl;
				indx_max = NULL;
				indx_min = NULL;
			}
			else
				if (abs(indx_max - indx_min) == 1)
				{
					cout << "You input the max and min values so that there is neighboring elements" << endl;
					cout << "Its impossible to calc the sum of 0 element" << endl << endl;
					indx_max = NULL;
					indx_min = NULL;
				}
				else
					if (abs(indx_max - indx_min) == 2)
					{
						cout << "You input the max and min values so that there is between only 1 element" << endl;
						cout << "Its impossible to calc the sum of 1 element" << endl << endl;
						indx_max = NULL;
						indx_min = NULL;
					}
		}
		
	}

	return product;
}