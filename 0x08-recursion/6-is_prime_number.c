#include "main.h"
#include <stdio.h>

/**
 * if_prime - A function which checks if my numb is prime
 * @n: the integer thats checked
 * @z: the div to check if the number is divisable
 *
 * Return: 1 if prime and 0 if otherwise
 */

int if_prime(int n, int z)
{
	if (n <= 1)
		return (0);

	if (z == 1)
		return (1);

	if (n % z == 0)
		return (0);

	return (if_prime(n, z - 1));
}

/**
 * is_prime_number - function that checks if number is prime
 * @n: the number checked
 *
 * Return: 1 if prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (if_prime(n, n - 1));
}
