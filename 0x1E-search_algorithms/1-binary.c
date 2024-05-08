#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - finds current subarray being searched
 * @array: pointer to the element of the array
 * @left: start index subarray
 * @right: last index subarray
 */
void print_array(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - value in a sorted array of integers
 *                 utilizing Binary search algorithm
 * @array: pointer to array
 * @size: numb elem in array
 * @value: value to search for
 * Return: the index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = (int)size - 1, mid;

	if (!array)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
