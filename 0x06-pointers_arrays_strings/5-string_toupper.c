#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase letters
 * @a: contains the string
 * Return: dest.
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] = a[i] - 32;
		i++;
	}

	return (a);
}

