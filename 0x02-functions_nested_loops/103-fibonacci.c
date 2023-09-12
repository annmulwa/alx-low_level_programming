#include <stdio.h>

/**
 * main - prints the even fibbonacci numbers
 * Return: 0 on success
 */

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int num3;
	int sum = 2;
	int limit = 4000000;

	while (num3 <= limit)
	{
		num3 = num1 + num2;
		if (num3 % 2 == 0)
			sum = sum + num3;
		num1 = num2;
		num2 = num3;
	}
	printf("%d\n", sum);
	return (0);
}
