#include"lists.h"
/**
 * print_list - print list
 * @h: have a list in list_t
 * Return: nodes number
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			i++;
		}
		else
			printf("[0] (nil)\n");
	}
	return (i);
}
