#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: minimum array
 * @max: maximum array
 * Return: output
 */

int *array_range(int min, int max)
{
	int *output;
	int size;
	int i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		output[i] = min++;
	return (output);
}
