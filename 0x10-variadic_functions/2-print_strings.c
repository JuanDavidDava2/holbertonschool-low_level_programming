#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
/**
 * print_strings - pring strings
 * @separator: take char
 * @n: strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pri;
	unsigned int i;
	char *str;

	va_start(pri, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(pri, char*);
		if (str == NULL)
			printf("(nil)");
		if (i < (n - 1) && separator != NULL)
			printf("%s%s", str, separator);
		else
			printf("%s", str);

	}
	printf("\n");
	va_end(pri);
}
