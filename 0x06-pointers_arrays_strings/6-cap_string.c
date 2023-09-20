#include "main.h"

/**
 * cap_string - capitalizes the first words of a string
 * @a: contains the string.
 * Return: the pointer to dest.
 */

char *cap_string(char *a)
{
	int j = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(a + j) >= 97 && *(a + j) <= 122)
		*(a + j) = *(a + j) - 32;
	j++;
	while (*(a + j) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(a + j) == sep_words[i])
			{
				if ((*(a + (j + 1)) >= 97) && (*(a + (j + 1)) <= 122))
					*(a + (j + 1)) = *(a + (j + 1)) - 32;
				break;
			}
		}
		j++;
	}
	return (a);
}

