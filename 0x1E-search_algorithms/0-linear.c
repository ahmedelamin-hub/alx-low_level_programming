#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: pointer to the first element
 * @size: size of arry in number
 * @value: value to search for
 *
 * Return: index where element is located or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%u] = [%d]\n", (unsigned int)x, array[x]);
		if (array[x] == value)
		{
			return ((int)x);
		}
	}

	return (-1);
}

