#include "main.h"
#include <stdio.h>

/**
 * search_sqrt - Function that finds square root of function
 * @n: parameter to find square root
 * @m: current square
 *
 * Return: square root or -1 if not found
 */
int search_sqrt(int n, int m)
{
	if (m * m == n)
		return (m);

	if (m * m > n)
		return (-1);

	return (search_sqrt(n, m + 1));
}

/**
 * _sqrt_recursion - function that calculates natural square
 * @n: para to find the square
 *
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (search_sqrt(n, 1));
}
