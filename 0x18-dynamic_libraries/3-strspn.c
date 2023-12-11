#include "main.h"

/**
 * _strspn - gets the string length
 * @s: contains the string
 * @accept: contains the characters to be accepted
 * Return: length of string
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
