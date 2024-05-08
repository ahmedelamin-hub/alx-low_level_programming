#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - Interpolation algo
 * @array: point tothe array
 * @size: numb elem inarray
 * @value: value
 * Return: index val is located, or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
				return ((int)low);
			break;
		}

		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));

		if (pos > high || pos < low)
		{
			printf("Value checked array[%lu] is out of range\n", (unsigned long)pos);
			break;
		}

		printf("Value checked array[%lu] = [%d]\n", (unsigned long)pos, array[pos]);

		if (array[pos] == value)
			return ((int)pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}

