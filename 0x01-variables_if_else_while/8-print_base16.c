#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16 in lowercase 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex_digit = '0';

	while (hex_digit <= 'f')
	{
		putchar(hex_digit);
		hex_digit++;

		if (hex_digit > '9' && hex_digit < 'a')
			hex_digit = 'a';
	}

	putchar('\n');

	return (0);
}

