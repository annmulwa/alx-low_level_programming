#include "variadic_functions.h"
#include <stdio.h>

/**
* print_all - prints any type of argument
* @format: list of types of arguments passed to the function
* Return: void
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *separator = "";
	va_list arguments;

	va_start(arguments, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arguments, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(arguments, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arguments, double));
					break;
				case 's':
					s = va_arg(arguments, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(arguments);
}
