#include"variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - sum all
 * @n: arg
 * Return: none
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int s = 0;
	unsigned int i;

	va_start(sum, n);
	for (i = 0; i < n; i++)
		s += va_arg(sum, unsigned int);
	return (s);
	va_end(sum);
}
