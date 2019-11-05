#include"lists.h"
/**
 * add_nodeint_end - add node at the end
 * @head: list
 * @n: new element.
 * Return: nodes or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *another;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		another = *head;
		while (another->next != NULL)
			another = another->next;
		another->next = new;
	}
	return (*head);
}
