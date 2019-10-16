#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: take variable
 * @height: take variable
 * Return: none
 */

int **alloc_grid(int width, int height)
{
	int r;
	int c;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	r = 0;

	while (r < height)
	{
		arr[r] = malloc(width * sizeof(int));

		if (arr[r] == NULL)
		{
			for (c = 0; c < r; c++)
				free(arr[c]);
			free(arr);
			return (NULL);
		}
		for (c = 0; c < width; c++)
			arr[r][c] = 0;

		r++;
	}
	return (arr);
}
