#include "lists.h"
/**
 * listint_len - return the number of elements in a linked listint_t list.
 * @h: list.
 * Return: number of elements of list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
