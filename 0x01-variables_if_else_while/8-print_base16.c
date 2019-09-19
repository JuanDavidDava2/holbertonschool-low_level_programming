#include <stdio.h>
/**
 * main - entry block
 * @void: No argument
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
		putchar(i % 10 + '0');
	for (c = 'a'; c < 'g'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
