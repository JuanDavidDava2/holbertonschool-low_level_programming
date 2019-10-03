#include "holberton.h"
/**
  * _strncat - concatenates two strings
  * @dest: takes  pointer
  * @src: takes pointer
  * @n: takes int
  * Return: none
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		j < n ? dest[i] = src[j] : j;
	}
	return (dest);
}
