#include "main.h"

/**
 * _strncat - concatinates 2 strings
 * @dest: the destination of the string
 * @src: the string source
 * @n: bytes to concat
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = strlen(dest);
	int x;

	for (x = 0 ; x < n && *src != '\0' ; x++)
	{
		dest[l + x] = *src;
		src++;
	}
	dest[l + x] = '\0';
	return (dest);
}
