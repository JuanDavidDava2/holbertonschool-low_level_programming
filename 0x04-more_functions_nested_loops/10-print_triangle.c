#include "holberton.h"
/**
 * print_triangle - function
 * @n: size of triangle
 * Return: void
 */
void print_triangle(int n)
{
	int a, b, c;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = a; b < n; b++)
				_putchar(' ');
			for (c = n - a; c < n; c++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
