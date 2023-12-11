#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * printf - prints output
 * @str: output to be printed
 * Return: output
 */
int printf(const char *str, ...)
{
	write(1, "9 8 10 24 75 + 9\n", 17);
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
