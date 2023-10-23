#include "main.h"

/**
 * _memcpy - a function that copies memory
 * @dest: the destination we copy to
 * @src: the source of the content we are supposed to copy from
 * @n: the bytes
 * Return: always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}
