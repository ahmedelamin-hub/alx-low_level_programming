#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function to reverse the array
 * @a: array of integers
 * @n: numb of elements in array
 */

void reverse_array(int *a, int n)
{
	int *s = a;
	int *e = a + n - 1;

	while (s < e)
	{
		int x = *s;
		*s = *e;
		*e = x;

		s++;
		e--;
	}
}

