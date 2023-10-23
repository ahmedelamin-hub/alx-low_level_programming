#include "main.h"
#include <unistd.h>

/**
 * print_chessboard - a function which prints a chessboard
 * @a: 2d array
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
			_putchar(a[x][y]);
		_putchar('\n');
	}
}
