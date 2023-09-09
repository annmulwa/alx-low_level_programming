#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: the value 0
 */

int main(void)
{
	int a, b;
	int i, j, m, n;

	for (a = 0; a < 100; a++)
	{
		i = a / 10;
		j = a % 10;

		for (b = 0; b < 100; b++)
		{
			m = b / 10;
			n = b % 10;

			if (i < m || (i == m && j < n))
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(32);
				putchar(m + '0');
				putchar(n + '0');

				if (!(i == 9 && j == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
