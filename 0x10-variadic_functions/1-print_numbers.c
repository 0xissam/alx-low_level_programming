#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_numbers - function that prints numbers, followed by a new line.
*@separator: is the string to be printed between numbers
*@n: numbers of integers
*Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i + 1 != n && separator != NULL)
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d", va_arg(args, int));

	}
	va_end(args);
	printf("\n");
}
