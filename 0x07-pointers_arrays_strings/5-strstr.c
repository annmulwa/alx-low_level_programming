#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: input string
 * @needle: input string
 * Return: 0 on success
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}

	return (0);
}

