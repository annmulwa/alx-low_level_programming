#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two s1 and nbytes of s2
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 * Return: output
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *output;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	unsigned int size;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	size = (s1len + n) + 1;
	output = malloc(sizeof(char) * size);
	if (output == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			output[s1len + i] = s2[i];
		output[s1len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; i < n; i++)
			output[s1len + i] = s2[i];
		output[s1len + i] = '\0';
	}
	return (output);

}
