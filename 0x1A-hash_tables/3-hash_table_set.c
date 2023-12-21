#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add the element to
 * @key: key of the element
 * @value: value associated with the key
 * Return: 0 on failure else 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	char *valcpy, *keycpy;
	hash_node_t *buck, *new_elem;

	if (!ht || !key || !*key || !value)
		return (0);

	valcpy = strdup(value);
	if (!valcpy)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	buck = ht->array[idx];

	while (buck)
	{
		if (!strcmp(key, buck->key))
		{
			free(buck->value);
			buck->value = valcpy;
			return (1);
		}
		buck = buck->next;
	}
	new_elem = calloc(1, sizeof(hash_node_t));
	if (new_elem == NULL)
	{
		free(valcpy);
		return (0);
	}
	keycpy = strdup(key);
	if (!keycpy)
		return (0);
	new_elem->key = keycpy;
	new_elem->value = valcpy;
	new_elem->next = ht->array[idx];
	ht->array[idx] = new_elem;
	return (1);
}
