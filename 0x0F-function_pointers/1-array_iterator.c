#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that performs arrays of elements
 * @array: array we perform on
 * @size: array size
 * @action: function we want to make arrys of
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
		action(array[x]);
}
