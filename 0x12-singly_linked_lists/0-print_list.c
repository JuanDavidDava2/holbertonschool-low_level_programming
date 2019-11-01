#include"lists.h"
/**
 * print_list - print list
 * @h: have a list in list_t
 * Return: nodes number
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	char *c = h;

	while (c != NULL)
	{
		if (c->str)
		{
			printf("[%d] %s\n", c->len, c->str);
			c = c->next;
			i++;
		}
		else
			printf("[0] (nil)\n");
	}
	return (i);
}
