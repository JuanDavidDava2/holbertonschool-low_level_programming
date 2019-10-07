#include"holberton.h"
/**
 * _memcpy - copy memory area
 * @dest: destination
 * @src: takes pointer
 * @n: takes int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}
