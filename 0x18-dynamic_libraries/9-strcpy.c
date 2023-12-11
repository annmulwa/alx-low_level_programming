#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: the destination of the string
 * @src: the source of the string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
