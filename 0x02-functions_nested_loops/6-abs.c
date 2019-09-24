#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: take a int
 * Return: abs
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
