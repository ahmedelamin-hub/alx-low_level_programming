#include "main.h"

/**
 * print_triangle - Prints a triangle of size 'size', followed by a new line.
 * @size: The size of the triangle to be printed.
 */
void print_triangle(int size)
{
	char x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				if (y < size - x - 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}

