#include "holberton.h"
/**
 * puts_half - Write a function that prints half of a string.
 * @str: takes pointer
 */
void puts_half(char *str)
{
	int size;

	for (size = 0; str[size] != '\0'; size++)
		;
	size++;
	for (size /= 2; str[size] != '\0'; size++)
	{
		_putchar(str[size]);
	}
	_putchar('\n');
}
