#include "main.h"

/**
 * _print_rev_recursion - a function which prints a string in reverse
 * @s: the charachters in the string we want to print in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
