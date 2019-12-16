#include"lists.h"
/**
 * add_dnodeiint - add new node
 * @head: double pointer
 * @n: take int
 * Return: return node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)            
	{
		*head = new;                                         
		new->prev = NULL;
		new->next= NULL;
	}
	else
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
