#include "main.h"
/**
 * _isdigit - check digit 0 to 9
 * @c: character checked
 *
 * Return: 1 digit, 0 not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

