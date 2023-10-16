#include "main.h"

/**
 * swap_int - this function swaps one integer by another
 * @a: the first number
 * @b: the second number
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
