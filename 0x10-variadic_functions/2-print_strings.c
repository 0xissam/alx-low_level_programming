#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_strings -  function that prints strings, followed by a new line.
*@separator:  the string to be printed between the strings
*@n: number of stringd
*Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);

		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

