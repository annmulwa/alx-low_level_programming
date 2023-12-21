#include "hash_tables.h"

/**
 * hash_djb2 - function to implement djb2 algorithm
 * @str: str to store the value
 * Return: bits to the value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long val;
	int i;

	val = 5381;

	while ((i = *str++))
	{
		val = ((val << 5) + val) + i;
	}
	return (val);
}
