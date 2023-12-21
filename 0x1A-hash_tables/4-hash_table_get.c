#include "hash_tables.h"

/**
 * hash_table_get - gets value from the hash table
 * @ht: hash table
 * @key: key containing the value
 * Return: value ofthe element or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t  *buck;

	if (!ht || !key || !*key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	buck = ht->array[idx];

	while (buck)
	{
		if (!strcmp(key, buck->key))
			return (buck->value);
		buck = buck->next;
	}
	return (NULL);
}
