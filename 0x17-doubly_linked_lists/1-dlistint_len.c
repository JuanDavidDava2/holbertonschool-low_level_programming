#include"lists.h"
/**
 * dlistint_len - return the number of elements in a dlistint_t list.
 * @h: pointer to struct
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *aux = h;
	int count = 0;

	if (aux == NULL)
		return (0);
	while (aux != NULL)
	{
		count++;
		aux = aux->next;
	}
	return (count);

}
