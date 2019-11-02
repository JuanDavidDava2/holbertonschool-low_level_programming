#include "lists.h"
/**
 * free_list - free memory of list
 * @head: list
 * Return: list
 */

void free_list(list_t *head)
{
	if (head)
	{
	free(head->next);
	free(head->str);
	free(head);
	}
}
