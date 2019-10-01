#include "holberton.h"
#include <stdio.h>
/**
 * *_strcpy - copy a strings
 * *@dest: is a pointer
 * @src: is a pointer
 * Return: On succes string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		*(dest + i) = src[i];
	}
	if (src[i] == '\0')
	{
		*(dest + i) = src[i];
	}
	return (dest);
}
