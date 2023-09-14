#include "main.h"

/**
 * print_line - prints underscore
 * @n: check the parameter
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
		if (n <= 0)
			_putchar('\n');
	}
	_putchar('\n');
}
