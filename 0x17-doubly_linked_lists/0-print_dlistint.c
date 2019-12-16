#include"lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to struct
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *aux = h;
	int count = 0;

	if (aux == NULL)
		return (0);
	while (aux != NULL)
	{
		printf("%d\n", aux->n);
		count++;
		aux = aux->next;
	}
	return (count);

}
