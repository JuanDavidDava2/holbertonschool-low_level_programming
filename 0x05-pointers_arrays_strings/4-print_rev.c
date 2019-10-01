#include "holberton.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: takes pointer
 * Return: none
 */
void print_rev(char *s)
{
	int a = 0, b;

	while (s[b] != '\0')
		b++;
	b--;
	for (a = b; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
