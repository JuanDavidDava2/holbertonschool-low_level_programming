#include"holberton.h"
#include<stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: takes pointer
 * @c: takes character
 *
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (NULL);
}
