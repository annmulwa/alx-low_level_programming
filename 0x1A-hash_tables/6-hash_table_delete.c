#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j =0;
	hash_node_t *buck, *tmp;

	if (!ht)
		return;
	for (j = 0; j < ht->size; j++)
	{
		buck = ht->array[j];
		while (buck)
		{
			tmp = buck;
			buck = buck->next;
			if (tmp->key)
				free(tmp->key);
			if (tmp->value)
				free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
