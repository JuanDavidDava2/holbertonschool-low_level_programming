#include"holberton.h"
/**
 * _islower - Returns 1 if c is lowercase
 * @c: an int
 * Return: 0 blabla
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
