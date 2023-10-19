#include <stdio.h>

void print_f(void)__attribute__((constructor));

/**
 * print_f - prints some lines before main
 * Return: void
 */

void print_f(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
