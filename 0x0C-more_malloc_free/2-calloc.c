#include "main.h"
#include <stdlib.h>

/**
 * _calloc - sets memory to zero
 * @nmemb: array
 * @size: size of array
 * Return: output
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	return (output);
}
