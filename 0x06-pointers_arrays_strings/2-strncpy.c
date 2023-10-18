#include "main.h"

/**
 * _strncpy - function that copies the string
 * @dest: the destination we want to copy to
 * @src: the source we are copying from
 * @n: the number of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0 ; x < n && src[x] != '\0' ; x++)
		dest[x] = src[x];
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
