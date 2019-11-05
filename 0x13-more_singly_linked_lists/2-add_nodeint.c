#include "lists.h"
/**
 * add_nodeint - add a new node.
 * @head: list
 * @n: new element
 * Return: address of elements of list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;


	return (*head);
}
