#include"holberton.h"

/**
 * print_last_digit - print the last digit
 * @n: take a int
 * Return: return
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (n < 0)
		d = d * -1;

	_putchar(d + '0');
	return (d);
}
