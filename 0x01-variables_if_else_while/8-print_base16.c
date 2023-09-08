#include <stdio.h>

/**
 * main - contains the main function
 * Return: the value 0
 */

int main(void)
{
	char i;
	char n;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
