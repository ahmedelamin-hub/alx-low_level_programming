#include <stdio.h>
#include "search_algos.h"

int binary_search_aux(int *array, int low, int high, int value);

/**
 * exponential_search - Searches the Exponential search algorithm
 * @array: pointer elem of the array
 * @size: numb elements in array
 * @value: value to sear
 * Return: index valu or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	int bound = 1;
	int low, high;

	if (!array)
	{
		return (-1);
	}

	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = bound < (int)size ? bound : (int)size - 1;

	return (binary_search_aux(array, low, high, value));
}

/**
 * binary_search_aux - binary search
 * @array: pointerarray
 * @low: low index for earch
 * @high: higher index search
 * @value: value
 * Return: index value or -1
 */
int binary_search_aux(int *array, int low, int high, int value)
{
	int mid, gt;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (gt = low; gt <= high; gt++)
		{
			printf("%d", array[gt]);
			if (gt < high)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
