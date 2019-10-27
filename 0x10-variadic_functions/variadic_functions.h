#ifndef VARF
#define VARF
#include <stdarg.h>
#include <stdio.h>
void prn_char(va_list ch);
void prn_int(va_list in);
void prn_float(va_list fl);
void prn_string(va_list st);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	void (*f)(va_list);
} op_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
