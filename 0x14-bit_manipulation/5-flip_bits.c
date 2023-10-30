#include "main.h"

/**
 * flip_bits - returns number of flips
 * @n: first number
 * @m: second number
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	unsigned long int start;

	res = n ^ m;
	for (start = 0; res > 0;)
	{
		if ((res & 1) == 1)
			start++;
		res = res >> 1;
	}
	return (start);
}
