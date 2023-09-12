#include <stdio.h>

/**
 * main - prints the first 98 numbers of fibonacci numbers
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int num3;
	int i;

	printf("%lu, ", num1);
	for (i = 1; i < 98; i++)
	{
		printf("%lu", num2);
		if (i != 97)
			printf(", ");
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
	}
	printf("\n");
	return (0);
}
