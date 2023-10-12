#include "main.h"

/**
 * _isupper - checks if c is uppercase
 * @c: parameter of the func
 * Return: 1 if c is upper and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
