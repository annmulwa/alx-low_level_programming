#include "main.h"

/**
 * _memset - sets the memory
 * @s: pointer to s
 * @b: contains the bytes
 * @n: n integers
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
