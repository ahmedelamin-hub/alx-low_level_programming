#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @x:number to compute last digit
 * Return: y
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (x < 0)
		y = -y;
	_putchar(y + '0');
	return (y);
}

