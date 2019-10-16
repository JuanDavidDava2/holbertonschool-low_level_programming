#include"holberton.h"
#include<stdlib.h>
/**
 *
 *
 *
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, sz1, sz2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (sz1 = 0; s1[sz1] != '\0'; sz1++)
		;
	for (sz2 = 0; s2[sz2] != '\0'; sz2++)
		;
	s = malloc((sizeof(char) * sz1) + (sizeof(char) * sz2) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < (sz1 + sz2); i++)
	{
		if (i >= sz1)
			s[i] = s2[i - sz1];
		else
			s[i] = s1[i];
	}
	s[i] = '\0';
	return (s);
}
