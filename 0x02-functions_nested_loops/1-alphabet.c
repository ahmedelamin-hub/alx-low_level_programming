#include "main.h"

/**
 * print_alphabet - prints the alhabets in lower case
 * return: 0
 * prints the alphabet using putcha twice in low case
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		_putchar(x);
	_putchar('\n');

}

