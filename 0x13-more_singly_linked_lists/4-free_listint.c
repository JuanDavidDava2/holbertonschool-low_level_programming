#include "lists.h"
/**
 * free_listint - free memory of list
 * @head: list
 */
void free_listint(listint_t *head);
{
	if (head)
	{
		free(head->next);
		free(head->str);
		free(head);
	}
}
