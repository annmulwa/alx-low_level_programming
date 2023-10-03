#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguents
 * @ac: argument count
 * @av: argument vector
 * Return: arguments
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;

	int count = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			count++;
	}
	count += ac;

	str = malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		str[k] = av[i][j];
		k++;
	}
	if (str[k] == '\0')
	{
		str[k++] = '\n';
	}
	}
	return (str);
}

