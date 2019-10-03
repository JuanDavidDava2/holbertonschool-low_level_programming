#include "holberton.h"
/**
 * _strncpy - copy a string
 * @dest: takes pointer
 * @src: takes pointer
 * @n: takes int
 * Return: none
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
