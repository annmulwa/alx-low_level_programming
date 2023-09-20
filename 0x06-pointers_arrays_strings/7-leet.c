#include "main.h"

/**
 * leet - encodes the string into 1337
 * @a: contains the string.
 * Return: the string a.
 */

char *leet(char *a)
{
	int count = 0, i;
	int lower_letters[] = {97, 101, 111, 116, 108};
	int upper_letters[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(a + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(a + count) == lower_letters[i] || *(a + count) == upper_letters[i])
			{
				*(a + count) = num[i];
				break;
			}
		}
	count++;
	}

	return (a);
}

