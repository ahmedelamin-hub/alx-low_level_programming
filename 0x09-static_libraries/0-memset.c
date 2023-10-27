#include "main.h"

/**
 * _memset - the function that sets the entry point
 * @s: the destination we are supposed to point to
 * @b: the constant bytes
 * @n: the byte
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
