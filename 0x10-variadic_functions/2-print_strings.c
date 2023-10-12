#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: Variable number of strings to be printed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list args;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		char *str = va_arg(args, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
		if (separator == NULL)
			continue;
	}

	va_end(args);

	printf("\n");
}
