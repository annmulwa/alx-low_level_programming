#include <stdio.h>
#include <unistd.h>

/**
 * main - contains the main function that prints the string
 * Return: the value 1 after execution
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
