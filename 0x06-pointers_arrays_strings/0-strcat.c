#include "holberton.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: takes pointer
 * @src: takes pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; (dest[i] = src[j]) != '\0'; i++, j++)
		;

	return (dest);
}
