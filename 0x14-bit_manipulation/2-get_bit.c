#include "main.h"

/**
 * get_bit - a function that returns bit at index
 * @n: numb
 * @index: index from 0
 *
 * Return: value or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
