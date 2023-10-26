#include "main.h"

/**
 * clear_bit - sets bit to 0
 * @n: pointer to number to be set
 * @index: point to be set
 * Return: -1 or 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clear;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	clear = 1;
	clear = clear << index;
	*n &= ~(clear);
	return (1);

}
