#include "lists.h"
/**
 * pop_listint - delete node
 * @head: pointer to pointer
 * Return: value
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int i = 0;

	new = *head;
	if (*head == NULL)
		return (0);
	i = new->n;
	new = new->next;
	free(*head);
	*head = new;
	return (i);
}
