#include "main.h"

/**
 * times_table - prints the times table
 * Return: void
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = b * a;

			if ((c / 10) == 0)
			{
				if (b != 0)
					_putchar(' ');
				_putchar(c + '0');

				if (b == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
				if (b == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
