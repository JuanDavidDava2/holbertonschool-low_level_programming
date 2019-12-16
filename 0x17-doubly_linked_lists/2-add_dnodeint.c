#include"lists.h"
/**
 * add_dnodeiint - add new node
 * @head: double pointer
 * @n: take int
 * Return: return node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
