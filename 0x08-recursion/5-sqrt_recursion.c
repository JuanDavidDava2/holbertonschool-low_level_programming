#include"holberton.h"
/**
 * calc - the natural square root of a number.
 * @n: takes int
 * @i: takes int
 * Return: return
 */
int calc(int n, int i)
{
	if (n > (i * i))
		return (calc(n, i + 1));
	else if (n == (i * i))
		return (i);
	else
		return (-1);
}
/**
 * _sqrt_recursion - makes the work
 * @n: takes int
 * Return: return
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (calc(n, 1));
}
