#include "main.h"

/**
 * _strchr - locates string character
 * @s: pointer to s
 * @c: character in the string
 * Return: character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);

}
