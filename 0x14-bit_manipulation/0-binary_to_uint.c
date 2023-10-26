#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: char 0 or 1
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		sum <<= 1;
		if (b[i] == '1')
			sum = sum + 1;
	}
	return (sum);
}
