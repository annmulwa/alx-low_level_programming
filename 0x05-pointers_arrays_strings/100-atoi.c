#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: contains the string
 * Return: an integer
 */

int _atoi(char *s)
{
	unsigned int count = 0, size = 0, j = 0, n = 1, k = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < 48 || *(s + count) > 57))
			break;
		if (*(s + count) == 45)
			n *= -1;
		if ((*(s + count) >= 48) && (*(s + count) <= 57))
		{
			if (size > 0)
				k *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		j = j + ((*(s + 1) - 48) * k);
		k /= 10;
	}
	return (j * n);
}
