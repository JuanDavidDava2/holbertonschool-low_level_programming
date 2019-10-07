#include"holberton.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: takes pointer
 * @b: is a constant byte
 * @n: first bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;

	return (s);
}
