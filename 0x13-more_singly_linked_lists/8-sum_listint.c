#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n).
 * @head: pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *l;
	int sum = 0;

	if (head == NULL)
		return (0);

	l = head;

	while (l != NULL)
	{
		sum += (*l).n;
		l = l->next;
	}
	return (sum);
}
