#include "variadic_functions.h"

/**
 * sum_them_all - a function that gets sums
 * @n: arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x;
	va_list a;

	if (n == 0)
		return (0);
	va_start(a, n);
	for (x = 0; x < n; x++)
	{
		sum = sum + va_arg(a, int);
	}
	va_end(a);
	return (sum);
}
