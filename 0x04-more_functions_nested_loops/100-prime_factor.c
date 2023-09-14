#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor
 * Return: 0
 */

int main(void)
{
	long x, maxn;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			maxn = number / x;
		}
	}
	printf("%ld\n", maxn);
	return (0);
}
