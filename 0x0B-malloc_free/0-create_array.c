#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of array
 * @c: where the characters are stored
 * Return: s or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
