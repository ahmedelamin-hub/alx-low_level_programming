#include "main.h"

/**
 * print_rev - shows the string in a reverse manner
 * @s: printed string
 * Return: void
 */

void print_rev(char *s)
{
	int x;
	int count = 0;

	for (x = 0 ; s[x] != '\0' ; x--)
		count++;
	for (x = count - 1 ; x >= 0 ; x--)
		_putchar(s[x]);
}
