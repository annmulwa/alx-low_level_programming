#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int mul;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = atoi(argv[i]) * atoi(argv[i + 1]);
			printf("%d\n", mul);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
