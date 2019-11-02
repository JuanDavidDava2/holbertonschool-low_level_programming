#include"lists.h"
/**
 * list_len - print the number of elements
 * @h: have a list in list_t
 * Return: nodes number
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	int l = 0;

	while (str[l] != '\0')
		l++;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	n->len = l;
	n->next = *head;
	*head = n;
	return (*head);
}
