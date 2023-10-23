#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - the function that prints diagnols
 * @a: the parameter diagnol
 * @size: size of the diagnol
 * Return: always 0
 */
void print_diagsums(int *a, int size)
{
	int x;
	int y;
	int sum1 = 0;
	int sum2 = 0;

	for (x = 0; x <= (size * size); x = x + size + 1)
		sum1 = sum1 + a[x];

	for (y = size - 1; y <= (size * size) - size; y = y + size - 1)
	sum2 = sum2 + a[y];
	printf("%d, %d\n", sum1, sum2);
}
