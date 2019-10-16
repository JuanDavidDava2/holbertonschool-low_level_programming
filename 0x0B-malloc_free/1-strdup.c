#include"holberton.h"
#include<stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: take pointer
 * Return: none
 */
char *_strdup(char *str)
{
	int l, j;
	char *i;

		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			for (l = 0; str[l] != '\0'; l++)
			{
			}
			i = malloc((l + 1) * sizeof(char));
			if (i == NULL)
			{
				return (NULL);
			}
			else
			{
				for (j = 0; j < l; j++)
				{
					i[j] = str[j];
				}
				i[j] = '\0';
				return (i);
			}
		}
	return (0);
}
