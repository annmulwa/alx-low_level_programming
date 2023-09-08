#include <stdio.h>

/**
 * main - contains the main function
 * Return: the value 0
 */

int main(void)
{
	char i;
	char n;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (n = 'A'; n <= 'Z'; n++)
		putchar(n);
	putchar ('\n');
	return (0);
}
