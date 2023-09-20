#include "main.h"
#include <stdio.h>

/**
 * infinite_add - function that adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: where the result will be stored
 * @size_r: size of buffer
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a1 = 0, a2 = 0, m, j, nm1, nm2, add = 0;

	while (*(n1 + a1) != '\0')
		a1++;
	while (*(n2 + a2) != '\0')
		a2++;
	if (a1 >= a2)
		j = a1;
	else
		j = a2;
	if (size_r <= j + 1)
		return (0);
	r[j + 1] = '\0';
	a1--, a2--, size_r--;
	nm1 = *(n1 + a1) - 48, nm2 = *(n2 + a2) - 48;
	while (j >= 0)
	{
		m = nm1 + nm2 + add;
		if (m >= 10)
			add = m / 10;
		else
			add = 0;
		if (m > 0)
		*(r + j) = (m % 10) + 48;
		else
			*(r + j) = '0';
		if (a1 > 0)
			a1--, nm1 = *(n1 + a1) - 48;
		else
			nm1 = 0;
		if (a2 > 0)
			a2--, nm2 = *(n2 + a2) - 48;
		else
			nm2 = 0;
		j--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}

