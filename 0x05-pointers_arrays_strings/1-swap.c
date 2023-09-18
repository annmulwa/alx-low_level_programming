#include "main.h"

/**
 * swap_int - swaps integers a and b
 * @a: address of int a
 * @b: address of int b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
