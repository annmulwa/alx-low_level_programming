#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtab;

	if (size == 0)
		return (NULL);
	hashtab = calloc(1, sizeof(hash_table_t));
	if (hashtab == NULL)
		return (NULL);
	hashtab->size = size;
	hashtab->array = calloc(size, sizeof(hash_table_t *));
	if (hashtab->array == NULL)
	{
		free(hashtab);
		return (NULL);
	}
	return (hashtab);
}
