#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @a: divide the value by 10
 * Return: the remainder of n
 */

int print_last_digit(int a)
{
	int n;

	n = a % 10;
	if (a < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
