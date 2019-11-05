#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print numbers
 * Return: (0)
 */
int main(void)
{
	int p, s, t;

	for (s = 0; s <= 9; s++)
	{
		for (p = 0; p <= 9; p++)
	{
			for (t = 0; t <= 9; t++)

				if (s != p && p > s && t > s && p != t && s != t && t > s && t > p)
				{
					putchar (s + '0');
					putchar (p + '0');
					putchar (t + '0');
					if (s != 7 || p != 8 || t != 9)
					{
						putchar (',');
						putchar (' ');
					}
				}
		}
	}
	putchar ('\n');
	return (0);
}
