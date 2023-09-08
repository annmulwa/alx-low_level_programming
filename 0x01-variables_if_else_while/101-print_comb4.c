#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: the value 0
 */

int main(void)
{
	int i;
	int m;
	int n;

	i = '0';
	m = '0';
	n = '0';

	while (i <= '9')
	{
		while (m <= '9')
		{
			while (n <= '9')
			{
				if (i < m && m < n)
				{
					putchar(i);
					putchar(m);
					putchar(n);
					if (i != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
				n++;
			}
			m++;
			n = '0';
		}
		i++;
		m = '0';
		n = '0';
	}
	putchar('\n');
	return (0);
}
