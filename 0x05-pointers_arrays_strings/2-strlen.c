#include "main.h"

/**
 * _strlen - prints the length of the string
 * @s: address of the string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;
	int count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
