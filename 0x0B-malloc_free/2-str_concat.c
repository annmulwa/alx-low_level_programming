#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: final output
 */

char *str_concat(char *s1, char *s2)
{
	int s1count = 0;
	int s2count = 0;
	int i;
	char *final;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1count++;
	for (i = 0; s2[i] != '\0'; i++)
		s2count++;
	final = malloc(sizeof(char) * (s1count + s2count) + 1);

	if (final == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		final[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		final[s1count + i] = s2[i];
	return (final);
}
