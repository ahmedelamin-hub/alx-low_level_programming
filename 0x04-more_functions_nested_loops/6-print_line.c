#include "main.h"

/**
 * print_line - prints a new line
 * @n: number of times the backslash will be printed
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int x;

		for (x = 1 ; x <= n ; x++)
			_putchar('_');
		_putchar('\n');
	}
}
