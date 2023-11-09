#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbs
 * @seperator: string we want to print
 * @n: args numb
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list a;
	unsigned int x;

	va_start(a, n);
	for (x = 0; x < n; x++)
	{
		if (seperator != NULL)
		{
			printf("%d", va_arg(a, int));
			if (x != n - 1)
				printf("%s", seperator);
		}
		else
			printf("%d", va_arg(a, int));
	}
	putchar('\n');
	va_end(a);
}

