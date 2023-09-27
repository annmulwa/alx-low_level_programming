#include "main.h"

int real_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: square of a number
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - finds the square root of a number
 * @n: square of a number
 * @i: squareroot
 * Return: the square root
 */

int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (real_sqrt_recursion(n, i + 1));
}

