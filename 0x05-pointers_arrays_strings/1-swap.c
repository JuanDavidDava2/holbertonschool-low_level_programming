#include "holberton.h"
/**
 * swap_int - swaps the values of two integers.
 * @b: takes pointer.
 * @a: takes pointer.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
