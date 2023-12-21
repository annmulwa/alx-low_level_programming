#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *buck;
	int first = 0;

	if (!ht)
		return;
	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		buck = ht->array[j];
		while (buck)
		{
			if (first)
				printf(",");
			printf("'%s' : '%s'", buck->key, buck->value);
			first = 1;
			buck = buck->next;
		}
	}
	printf("}\n");
}
