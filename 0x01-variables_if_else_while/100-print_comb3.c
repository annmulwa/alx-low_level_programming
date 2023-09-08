#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: the value 0
 */

int main(void)
{
	int i;
	int n;

	i = '0';
	n = '0';

	while (i <= '9')
	{
		while (n <= '9')
		{
			if (i < n)
			{
				putchar(i);
				putchar(n);
				if (i != '8' || (i == '8' && n != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			n++;
		}
		i++;
		n = '0';
	}
	putchar('\n');
	return (0);
}
