#include"lists.h"
/**
 * list_len - print the number of elements
 * @h: have a list in list_t
 * Return: nodes number
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
