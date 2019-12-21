#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n).
 * @head: listint_t
 * Return: sum.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tail;
	int sum = 0;

	if (head == NULL)
		return (0);
	tail = head;
	while (tail != NULL)
	{
		sum += tail->n;
		tail = tail->next;
	}
	return (sum);
}
