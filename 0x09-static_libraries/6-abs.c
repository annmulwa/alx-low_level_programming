#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @a: check the value
 * Return: a or -a
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}
