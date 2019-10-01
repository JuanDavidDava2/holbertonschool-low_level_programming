#include "holberton.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: takes pointer
 * Return: none
 */
void print_rev(char *s)
{
	int a = 0, c;

	while (s[c] != '\0')
		c++;

	c--;

	for (a = c; a <= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
