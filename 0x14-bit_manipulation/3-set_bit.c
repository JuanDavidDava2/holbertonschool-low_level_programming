#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 
 * @n: take int
 * @index: take int
 * Return: the number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	else
	{
		*n = *n + (1 << index);
		return (1);
	}
}
