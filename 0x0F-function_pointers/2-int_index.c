#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that looks for an integer
 * @array: the array we want to look in
 * @size: the array size
 * @cmp: the pointer of the function
 * Return: the index or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) == 1)
			return (x);
	}
	return (-1);
}
