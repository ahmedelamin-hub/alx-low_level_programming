#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: gives  numbers in base 10 followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}

	putchar('\n');

	return (0);
}

