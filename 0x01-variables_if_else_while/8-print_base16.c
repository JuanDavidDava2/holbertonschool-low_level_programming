#include <stdio.h>
/**
 * main - entry block
 * @void: No argument
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char b;

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
	for (b = 'a'; b < 'g'; b++)
	{
		putchar(b);
	}
	}
	putchar('\n');
	return (0);
}
