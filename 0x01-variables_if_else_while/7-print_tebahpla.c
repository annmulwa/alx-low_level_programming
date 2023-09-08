#include <stdio.h>

/**
 * main - contains the main function
 * Return: the value 0
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
