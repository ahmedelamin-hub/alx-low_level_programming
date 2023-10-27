#include "main.h"

/**
 * _isupper - checks uppercase charachters
 * @c: function para
 * Return: 1 on upper 0 on not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
