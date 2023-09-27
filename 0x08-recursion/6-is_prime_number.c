#include "main.h"

int real_prime_number(int n, int i);

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: input number
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (real_prime_number(n, n - 1));
}

/**
 * real_prime_number - calculates if a number is a prime number recursively
 * @n: input number
 * @i: iterator
 * Return: 1 if n is prime number, 0 if not
 */

int real_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	else
		return (real_prime_number(n, i - 1));
}
