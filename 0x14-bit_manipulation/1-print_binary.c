#include "holberton.h"
#include <limits.h>
/**
 * print_binary - Prints a number in binary
 * @n: Number to print
 * Return:
 */
void print_binary(unsigned long int n)
{
	int zero = 0;
	unsigned long int mask = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask > 0)
	{
		if ((n & mask) == 0 && zero == 1)
		{
			_putchar('0');
		}
		if ((n & mask) != 0)
		{
			_putchar('1');
			zero = 1;
		}
		mask = mask >> 1;
	}
}
