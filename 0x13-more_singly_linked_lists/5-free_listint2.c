#include "lists.h"
/**
 * free_listint2 - Frees  listint_t list.
 * @head: list.
 */
void free_listint2(listint_t **head)
{
	listint_t *new;
	listint_t *h;

	if (head == NULL)
		return;
	h = *head;
	while (h != NULL)
	{
		new = h->next;
		free(h);
		h = new;
	}
	*head = NULL;
}
