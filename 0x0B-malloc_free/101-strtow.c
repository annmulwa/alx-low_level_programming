#include <stdlib.h>
#include "main.h"

/**
 * **strtow - splits a string into words
 * @str: input string
 * Return: pointer to an array of strings
 * or NULL
 */

char **strtow(char *str)
{
	char **output, *tmp;
	int i, k = 0, len = 0, words, count = 0, start, end;
	int count_word;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	output = (char **) malloc(sizeof(char *) * (words + 1));
	if (output == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (count)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (count + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				output[k] = tmp - count;
				k++;
				count = 0;
			}
		}
		else if (count++ == 0)
			start = i;
	}

	output[k] = NULL;

	return (output);
}

