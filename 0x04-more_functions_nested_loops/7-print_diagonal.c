#include "main.h"

/**
 * print_diagonal - prints the backslash
 * @n: check the value
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			if (n > 1)
				for (j = 0; j <= i; j++)
				{
					_putchar(' ');
				}
			_putchar('\\');
			_putchar('\n');
		}

	}
}
