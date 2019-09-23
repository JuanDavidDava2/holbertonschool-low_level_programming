#include "holberton.h"
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char n[] = "Holberton";
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar(n[i]);
	}
	_putchar('\n');
	return (0);
}
