#include"holberton.h"
/**
 * _isalpha - Returns 1 if c is a letter, lowercase or uppercase
 * @c: an int
 * Return: 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
