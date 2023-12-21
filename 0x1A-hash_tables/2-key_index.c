#include "hash_tables.h"

/**
 * key_index - return sindex of a key
 * @key: contains the value of the hash table
 * @size: size of the hash table
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
