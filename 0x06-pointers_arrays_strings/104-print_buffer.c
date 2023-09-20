#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function prints a buffer
 * @b: buffer
 * @size: size of the buffer.
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, m, n;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%.8x:", i);
			for (m = i; m < i + 10; m++)
			{
				if (m % 2 == 0)
					printf(" ");
				if (m < size)
					printf("%.2x", *(b + m));
				else
					printf("  ");
			}
			printf(" ");
			for (n = i; n < i + 10; n++)
			{
				if (n >= size)
					break;
				if (*(b + n) < 32 || *(b + n) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + n));
			}
			printf("\n");
		}
	}
}

