#include "main.h"

/**
 * factorial - function that gets the factorial
 * @n: parameter to calc factorial
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
