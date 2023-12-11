#include "main.h"

/**
 * _strpbrk - searches for characters in a string
 * @s: contains the string
 * @accept: string to search in s
 * Return: character
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *i = accept;

		while (*i != '\0')
		{
			if (*s == *i)
				return (s);
			i++;
		}
		s++;
	}
	return (NULL);
}
