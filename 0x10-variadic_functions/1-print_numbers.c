#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: comma
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list arguments;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(arguments, int));
			if (i != n - 1)
			{
				printf("%s", separator);
			}
		}
		else
			printf("%d", va_arg(arguments, int));
	}
	printf("\n");
	va_end(arguments);
}
