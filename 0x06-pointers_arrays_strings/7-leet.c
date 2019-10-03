#include "holberton.h"
/**
 * leet - mozart do the music for allte people
 * @s: this parameter is the string to encrypt
 * Return: this return a char.
 */
char *leet(char *s)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char e[] = "4433007711";

	i = 0;

		while (s[i] != '\0')
	{
		for (j = 0; e[j] != '\0'; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = e[j];
			}
		}
		i++;
	}
	return (s);
}
