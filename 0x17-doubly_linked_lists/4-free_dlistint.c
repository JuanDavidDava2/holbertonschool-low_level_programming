#include "lists.h"
/**
 * free_dlistint - free a listint_t list
 * @head: listint_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	if (head != NULL)
		while (head->next != NULL)
		{
			aux = head->next;
			free(head);
			head = aux;
		}
		free(head);
}
