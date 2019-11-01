#include"lists.h"
/**
 * print_list - print list
 * @h: have a list in list_t
 * Return: nodes number
 */
size_t print_list(const list_t *h)
{
	size_t count;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
return (count);
}
