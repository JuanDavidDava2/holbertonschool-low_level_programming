#include "lists.h"
/**
 * reverse_listint - print in reverse
 * @head: node
 * Return: node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nodo = NULL, *temp = NULL;

	if (head == NULL || *head == NULL) 
		return (NULL);

	nodo = *head;
	*head = NULL;

	while (nodo)
	{
		temp = nodo->next;
		nodo->next = *head;
		*head = nodo;
		nodo = temp;
	}
	return (*head);
}
