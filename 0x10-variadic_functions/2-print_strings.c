#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: comma
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		char *s = va_arg(arguments, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if ((separator != NULL) && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
