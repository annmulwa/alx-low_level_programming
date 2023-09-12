#include "main.h"

/**
 * _islower - prints c in lower case
 * @c: parameter to be checked
 * Return: 1 if c else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
