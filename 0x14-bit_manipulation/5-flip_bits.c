#include "main.h"

/**
 * flip_bits - returns number of bits
 * @n: first numb
 * @m: second numb
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;

	unsigned long int cur;
	unsigned long int e = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		cur = e >> x;
		if (cur & 1)
			count++;
	}

	return (count);
}
