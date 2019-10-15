#include"holberton.h"
#include<stdlib.h>
/**
 * create_array - create array
 * @size: size
 * @c: character
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(c));
	if (a == NULL)
		return (NULL);
	for (b = 0; b < size; b++)
		*(a + b) = c;
	return (a);
}
