#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a function that prints strings
 * @separator: seperator of strings
 * @n: numb parameter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int x;

	va_start(a, n);

	for (x = 0; x < n; x++)
	{
		char *y = va_arg(a, char *);

		if (y == NULL)
			printf("(nil)");
		else
			printf("%s", y);
		if (separator != NULL && x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
