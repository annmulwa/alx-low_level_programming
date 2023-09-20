#include "main.h"
/**
 * rot13 - encodes the string using rot13
 * @a: contains the string.
 * Return: the string a.
 */

char *rot13(char *a)
{
	int i, j;

	char *m = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *n = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; m[j] != '\0'; j++)
		{
			if (a[i] == m[j])
			{
				a[i] = n[j];
				break;
			}
		}
	}

	return (a);
}

