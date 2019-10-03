#include "holberton.h"
/**
 * *_strcat - concatenates two strings.
 * @dest: takes pointer
 * @src: takes pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, l;

	l = 0;

	while (dest[l] != '\0')
		l++;

	for (i = 0; src[i] != '\0'; i++)
		dest[l + i] = src[i];
	dest[l + i] = '\0';

	return (dest);
}
