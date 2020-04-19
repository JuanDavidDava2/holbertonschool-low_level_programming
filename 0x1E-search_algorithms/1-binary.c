#include "search_algos.h"
/**
 * print_array - print the elements of the array
 * @array: pointer to the array.
 * @size: size of array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i > 0 && i < size)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}
/**
 * binary_search - Search for the value in a sorted arrays
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: the value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, mid, end = size - 1;

	if (array)
	{
		while (start <= end)
		{
			print_array(array + start, end + 1 - start);
			mid = (start + end) / 2;
			if (array[mid] < value)
				start = mid + 1;
			else if (array[mid] > value)
				end = mid - 1;
			else
				return (mid);
		}
	}
	return (-1);
}
