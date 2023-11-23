#include "main.h"

/**
 * clear_bit - a function that sets value of bit to 0
 * @n: pointer
 * @index: index
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
