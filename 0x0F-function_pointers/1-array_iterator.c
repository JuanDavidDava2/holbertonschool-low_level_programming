#include"function_pointers.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * array_iterator - given as a parameter on each element of an array.
 * @array: array
 * @size: size array
 * @action: function pointer.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
