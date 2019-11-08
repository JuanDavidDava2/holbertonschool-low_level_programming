#include "holberton.h"
/**
 * binary_to_uint - convert binary to decimal
 * @b: take binary
 * Return: number decimal.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int s = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (b[s] != '\0')
	{
		if (b[s] == '1' || b[s] == '0')
			num = num * 2 +  (b[s] - '0');
		else
			return (0);
		s++;
	}
	return (num);
}
