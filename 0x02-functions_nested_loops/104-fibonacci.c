#include <stdio.h>


/**
 * numLength - returns the lenth of string used
 * @num : contains the parameter num
 * Return: the length
 */

int numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}

/**
 * main - prints the first 98 fibonaci numbers
 * Return: 0 on success
 */

int main(void)
{
	unsigned long n1 = 1, n2 = 2, tmp, mx = 100000000, n1o = 0, n2o = 0, tmpo = 0;
	short int i = 1, initial;

	while (i <= 98)
	{
		if (n1o > 0)
			printf("%lu", n1o);
		initial = numLength(mx) - 1 - numLength(n1);
		while (n1o > 0 && initial > 0)
		{
			printf("%i", 0);
			initial--;
		}
		printf("%lu", n1);

		tmp = (n1 + n2) % mx;
		tmpo = n1o + n2o + (n1 + n2) / mx;
		n1 = n2;
		n1o = n2o;
		n2 = tmp;
		n2o = tmpo;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}

