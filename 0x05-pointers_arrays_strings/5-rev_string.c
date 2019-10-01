#include "holberton.h"
/**
 * rev_string - Write a function that reverses a string. 
 * @s: takes pointer
 */
void rev_string(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}
