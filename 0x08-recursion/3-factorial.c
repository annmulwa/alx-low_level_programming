#include "main.h"

/**
 * factorial - returns the factorial of an integer
 * @n: integer
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
