#include "main.h"
#include <stddef.h>

/**
 * get_bit - returns value of a bit
 * @n: number to determine bits
 * @index: index to check bit
 * Return: 0 or 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	size_t j;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (j = 0; j < index; j++)
		n = n >> 1;
	return ((n & 1));
}
