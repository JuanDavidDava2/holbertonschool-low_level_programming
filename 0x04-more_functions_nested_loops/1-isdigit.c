#include"holberton.h"
/**
 * _isdigit - print 1 if c is a digit and 0 otherwise
 * @c: takes int
 * Return: return 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
