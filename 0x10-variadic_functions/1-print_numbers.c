#include"variadic_functions.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
/**
 * print_numbers - print number
 * @separator: take a separator
 * @n: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pri;
	unsigned int i;

	va_start(pri, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pri, unsigned int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(pri);
}
