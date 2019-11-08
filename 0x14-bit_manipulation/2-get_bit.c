#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: is an int
 * @index: is an int
 * Return: the number or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
