#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory to an array
 * @width: width of array
 * @height: height of array
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **final;

	if (width <= 0 || height <= 0)
		return (NULL);
	final = malloc(sizeof(int *) * height);

	if (final == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		final[i] = malloc(sizeof(int) * width);

		if (final[i] == NULL)
		{
			free(final);
			for (j = 0; j <= height; j++)
				free(final[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			final[i][j] = 0;
	}
	return (final);
}
