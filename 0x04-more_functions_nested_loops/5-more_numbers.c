#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *@void: no argument
   */
void more_numbers(void)
{
	int c, f;

	for (c = 0; c <= 9; c++)
	{
		for (f = 0; f  <= 14; f++)
		{
			if (f > 9)
				_putchar(f / 10 + '0');
			_putchar(f % 10 + '0');
		}
		_putchar('\n');
	}

}
