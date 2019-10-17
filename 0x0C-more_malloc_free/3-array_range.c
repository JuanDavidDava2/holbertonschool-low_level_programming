#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Write a function that creates an array of integers.
 * @min: minimum amount
 * @max: maximun amount
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int j = max - min;

	if (min > max)
	{
		return(NULL);
	}
	p = malloc((j + 1) * sizeof(*p));
	if (p == NULL)
	{
		return(NULL);
	}
	for (i = 0; i <= j; min++, i++)
	{
		p[i] = min;
	}
	return (p);
}
