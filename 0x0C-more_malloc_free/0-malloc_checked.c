#include"holberton.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * malloc_checked - Write a function that allocates memory using malloc.
 * @b: take variable
 * Return: varable b
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
