#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: char
 * @size: int
 * Return: int
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	hash = hash % size;
	return (hash);
}
