#include "lists.h"
/**
 * add_dnodeint_end - Add new node at the end
 * @head: pointer 
 * @n: new number
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux = *head, *new;
	
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (aux == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
	}
	else
	{
		while (aux->next)
			aux = aux->next;
		new->next = NULL;
		new->prev = aux;
		aux->next = new;
	}
	return (new);
}
