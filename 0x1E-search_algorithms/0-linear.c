#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers
 * @array: Is a pointer to the first element of the array
 * @size:  Is the number of elements in array
 * @value: Is the value to search
 * Return: te value
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
