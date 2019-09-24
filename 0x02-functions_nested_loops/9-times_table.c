#include"holberton.h"

/**
 *times_table - print the table
 */

void times_table(void)
{
	int i, d, m;

	for (i = 0; i <= 9; i++)
	{
		for (d = 0; d <= 9; d++)
		{
			m = i * d;

				if (m < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if (m >= 10)
				{
					_putchar(',');
					_putchar(' ');
				}
			if (m >= 10)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else
			{
				_putchar(m + '0');
			}
		}
		_putchar('\n');
	}
}
