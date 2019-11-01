#include "lists.h"
/**
 * print_list - print list
 * @h: have a list in list_t
 * Return: nodes number
 */
size_t print_list(const list_t *h)
{
	if (!h)
		return (0);
	if (!(h->str))
		printf("[0] (nil)\n");
	else
		printf("[%i] %s\n", h->len, h->str);
	return (print_list(h->next) + 1);
}
