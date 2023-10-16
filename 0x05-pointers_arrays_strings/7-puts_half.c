#include "main.h"

/**
 * puts_half - function which shows half the string
 * @str: parameter that we want to print
 * Return: void
 */

void puts_half(char *str)
{
	int x;
	int n;
	int c = 0;

	for (x = 0 ; str[x] != '\0' ; x++)
		c++;
	n = (c - 1) / 2;
	for (x = n + 1 ; str[x] != '\0' ; x++)
		_putchar(str[x]);
	_putchar('\n');
}
