#include "main.h"

/**
 * _puts - function to show string
 * @str: the charachter that will print
 * Return: void
 */

void _puts(char *str)
{
	int x;

	for (x = 0 ; str[x] != '\0' ; x++)
		_putchar(str[x]);
	_putchar('\n');
}
