#include"holberton.h"
/**
 * print_sign- Returns 1 and prints + if n is greater than zero
 * @n: an int
 * Return: 1 if n is greater than 0, 0 if is 0, and- 1 if is less 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
