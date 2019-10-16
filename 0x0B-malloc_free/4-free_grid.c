#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - free
 * @grid: is a double pointer
 * @height: takes variable
 * Return: On.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
