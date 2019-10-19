#include"holberton.h"
#include<stdlib.h>
/**
 * string_nconcat - Write a function that concatenates two strings.
 * @s1:  takes pointer
 * @s2: takes pinter
 * @n: take a vaiable
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a, b, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	if (n >= b)
		n = b;
	p = malloc(((a + n) * sizeof(char)) + 1);
	if (p == NULL)
		return (NULL);
	for (c = 0; c < a;  c++)
		p[c] = s1[c];
	for (d = 0; d < n; c++, d++)
		p[c] = s2[d];
	p[c] = '\0';
	return (p);
}
