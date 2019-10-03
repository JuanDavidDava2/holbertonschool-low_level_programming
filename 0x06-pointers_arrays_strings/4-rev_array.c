#include"holberton.h"
/**
  * reverse_array - reverse the content of an array of integers.
  * @a: takees an array
  * @n: takes int
  */
void reverse_array(int *a, int n)
{
	int i, j;

	i = n - 1;

	j = 0;

	while (i > j)
	{
		int tp = a[i];

		a[i] = a[j];
		a[j] = tp;
		i--;
		j++;
	}
}
