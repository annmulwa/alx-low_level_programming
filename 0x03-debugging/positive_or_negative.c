#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - whether number is positive, negative or zero
 * @i: check the number
 * Return: void
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
