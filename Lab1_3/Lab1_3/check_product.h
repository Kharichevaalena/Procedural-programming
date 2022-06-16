#pragma once
#include "Library.h"
#include "TemplatesLibrary.h"

template <typename Type>

bool check_product(Type prodmaxmin, int size, Type* arr, bool flag)
{
	if (prodmaxmin == 99999)
	{
		cout << "You input the max and min values so that is the superposition" << endl;
		cout << "Its impossible to calc the sum" << endl << endl;
	}
	else 
		if (prodmaxmin == 999999)
		{
			cout << "You input the max and min values so that there is neighboring elements" << endl;
			cout << "Its impossible to calc the sum of 0 element" << endl << endl;
		}
		else 
			if (prodmaxmin == 9999999)
			{
				cout << "You input the max and min values so that there is between only 1 element" << endl;
				cout << "Its impossible to calc the sum of 1 element" << endl << endl;
			}
			else
			{
				cout << "Product of array elements between |max| and |min|: " << prodmaxmin << endl;
				flag = false;
			}
	return flag;
}