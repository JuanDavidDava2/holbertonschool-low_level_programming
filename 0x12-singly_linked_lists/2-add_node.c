#include"lists.h"
/**
 * add_node - add new node.
 * @head: have a list.
 * @str: take a string.
 * Return: list.
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
