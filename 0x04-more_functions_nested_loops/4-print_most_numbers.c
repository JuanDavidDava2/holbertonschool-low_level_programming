#include "holberton.h"
/**
 * print_most_numbers - print nombers 1 to 9 less 2 and 4
 *@void: no argument
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != '2' && i != '4')

		_putchar(i);
	}
	_putchar('\n');
}
