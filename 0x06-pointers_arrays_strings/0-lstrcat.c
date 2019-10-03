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

	j = 0;

	while (dest[j] != '\0')
		j++;

	for (i = 0; src[i] != '\0'; i++)
		dest[j + i] = src[i];

	dest[j + i] = '\0';

	return (dest);
}
