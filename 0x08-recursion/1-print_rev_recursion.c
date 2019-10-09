#include"holberton.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: tekes pointer
 * Return: none
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
