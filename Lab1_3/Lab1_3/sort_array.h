#pragma once
#include "Library.h"
#include "TemplatesLibrary.h"

template <typename Type>

void sort_array(int size, Type* arr)
{
	int same_elements;

	same_elements = count_same_elements(size, arr);


	outputarray(size, sort_by_choice(same_elements, size, arr));
}