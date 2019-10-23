#include "function_pointers.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * int_index - searches for an integer.
 * @array: array.
 * @size: size array.
 * @cmp: function pointer.
 * Return: none
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
