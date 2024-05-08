#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * print_value - Prints the value checked
 * @index: the index of the value in the array
 * @value: the value to print
 */
void print_value(int index, int value)
{
	printf("Value checked array[%d] = [%d]\n", index, value);
}

/**
 * jump_search - value in a sorted array jump search
 * @array: pointer
 * @size: number elem in the array
 * @value: value to search for
 * Return: value or -1 if not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (!array)
		return (-1);

	while (prev < size && array[prev] < value)
	{
		print_value((int)prev, array[prev]);
		prev += step;
		if (prev >= size)
			prev = size - 1;
	}

	if (prev < size && array[prev] >= value)
	{
		size_t y = prev - step + 1;

		printf("Value found between indexes [%d] and [%d]\n", (int)y, (int)prev);
		for (; y <= prev && y < size; y++)
		{
			print_value((int)y, array[y]);
			if (array[y] == value)
				return ((int)y);
		}
	}

	return (-1);
}
