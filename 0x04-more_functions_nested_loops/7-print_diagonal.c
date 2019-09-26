#include "holberton.h"
/**
 *print_diagonal - draws a diagonal line on the terminal.
 *@n: takes int
  */
void print_diagonal(int n)
{
	int i, a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (a = 2; a <= i ; a++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
