#include"holberton.h"
#include<stdlib.h>
/**
 * _calloc - Write a function that allocates memory for an array, using malloc.
 * @nmemb: take variable
 * @size: take variable
 * Return: none
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	int *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
