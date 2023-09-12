#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int num3;
	int i;

	printf("%lu, ", num1);

	for (i = 1; i < 50; i++)
	{
		printf("%lu", num2);
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
