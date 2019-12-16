#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n).
 * @head: listint_t
 * Return: sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head != NULL)
	{
		while (head != NULL)
			sum += head->n, head = head->next;
		return (sum);
	}
	return (0);
}
