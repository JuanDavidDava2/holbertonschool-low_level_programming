#include "hash_tables.h"
/**
 * hash_table_get - value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
