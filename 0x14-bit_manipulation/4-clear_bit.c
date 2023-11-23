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
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & -(1 << index);
	return (1);
}
