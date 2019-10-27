#include"variadic_functions.h"
/**
 * prn_char - print char
 * @ch: takes char..
 */
void prn_char(va_list ch)
{
	printf("%c", va_arg(ch, int));
}
/**
 * prn_int - print int.
 * @in: takes int.
 */
void prn_int(va_list in)
{
	printf("%d", va_arg(in, int));
}
/**
 * prn_float - print float.
 * @fl: takes float
 */
void prn_float(va_list fl)
{
	printf("%f", va_arg(fl, double));
}
/**
 * prn_string - print string.
 * @st: takes string
 */
void prn_string(va_list st)
{
	char *str = va_arg(st, char *);

	if (str == '\0')
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - print char, int, float or string.
 * @format: take a string
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *sep = "";
	int i = 0, j;

	op_t ops[] = {
		{"c", prn_char},
		{"i", prn_int},
		{"f", prn_float},
		{"s", prn_string},
		{NULL, NULL}
	};
	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (ops[j].op)
		{
			if (ops[j].op[0] == format[i])
			{
				printf("%s", sep);
				ops[j].f(list);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
