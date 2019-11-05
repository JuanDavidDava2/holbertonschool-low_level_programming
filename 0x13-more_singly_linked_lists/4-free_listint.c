#include "lists.h"
/**
 * free_listint - free memory of list
 * @head: list
 */
void free_listint(listint_t *head)
{
	listint_t *n;

	while (head)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
