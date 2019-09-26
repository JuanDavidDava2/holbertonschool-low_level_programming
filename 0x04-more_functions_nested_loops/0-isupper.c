#include"holberton.h"
/**
 * _isupper - print 1 if c is uppercase and 0 otherwise
 * @c: takes int
 * Return: return 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
