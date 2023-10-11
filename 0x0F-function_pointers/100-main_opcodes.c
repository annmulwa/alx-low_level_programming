#include <stdio.h>
#include <stdlib.h>

/**
* main - program prints its own opcodes
* @argc: argument count
* @argv: argument vectors
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int bytes;
	int j;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (j = 0; j < bytes; j++)
	{
		if (j == bytes - 1)
		{
			printf("%02hhx\n", arr[j]);
			break;
		}
		printf("%02hhx ", arr[j]);
	}
	return (0);
}
