#include "holberton.h"
/**
 * rev_string - Write a function that reverses a string.
 * @s: takes pointer
 */
void rev_string(char *s)
{
	int a, b;

	char temp;

	for (b = 0; s[b] != '\0'; b++)
		;
	b = b - 1;
	for (a = 0; a < b; b--, a++)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
	}
}
