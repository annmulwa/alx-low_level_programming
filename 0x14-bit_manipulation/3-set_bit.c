#include "main.h"

/**
 * set_bit - sets bit to 1
 * @n: pointer to number to be set
 * @index: point at which to set bit
 * Return: -1 or 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	set = 1;
	set = set << index;
	*n = (*n) | set;
	return (1);
}
