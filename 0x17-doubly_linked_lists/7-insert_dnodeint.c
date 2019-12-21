#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: ddlistint_t
 * @idx: int
 * @n: n
 * Return: sum.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy, *node;

	node = *h;
	copy = malloc(sizeof(dlistint_t));
	if (copy == NULL)
		return (NULL);

	copy->n = n;
	if (*h == NULL && idx != 0)
	{
		free(copy);
		return (NULL);
	}
	if (idx == 0)
	{
		free(copy);
		return (add_dnodeint(h, n));
	}
	node = *h;
	while (idx > 1 && node->next)
	{
		node = node->next;
		idx--;
	}
	if (idx == 1)
	{
		if (!node->next)
			copy->next = NULL;
		else
		{
			copy->next = node->next;
			node->next->prev = copy;
		}
		copy->prev = node;
		node->next = copy;
		return (copy);
	}
	else
		return (NULL);
}
