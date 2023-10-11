#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 *
 * Description: This function prints all natural numbers starting from
 * 'n' to 98, separated by a comma and a space. If 'n' is greater than 98,
 * it will print in descending order.
 */
void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x < 98)
				printf(", ");
		}
	}
	else
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x > 98)
				printf(", ");
		}
	}
	printf("\n");
}

