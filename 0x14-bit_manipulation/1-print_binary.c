#include "main.h"

/**
 * binary - prints binary of a number
 * @n: integer
 */

void binary(unsigned long int n)
{
	if (n == 0)
		return;
	binary(n >> 1);
	if ((n & 1) == 0)
		_putchar('0');
	if ((n & 1) == 1)
		_putchar('1');
}

/**
 * print_binary - prints binary of a number
 * @n: integer
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		binary(n);
}
