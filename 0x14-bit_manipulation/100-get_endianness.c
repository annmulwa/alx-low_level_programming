#include "main.h"

/**
 * get_endianness - checks the endianness of a number
 * Return: 0 or 1
 */

int get_endianness(void)
{
	int k = 1;
	int j;

	j = (int) (((char *)&k)[0]);
	return (j);
}
