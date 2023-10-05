#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - causes a normal termination with an exit status 98
 * @b: int b
 * Return: output
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
