#include"function_pointers.h"
/**
 * print_name - prints a name.
 * @name: takes name.
 * @f: funtion pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
