#include "main.h"

/**
 * _strcat - function that performs the concatination of 2 strings
 * @dest: the destination we are supposed to concatinate to
 * @src: the source
 * Return: dest;
 */

char *_strcat(char *dest, char *src)
{
	int dln = 0;
	int sln = 0;
	int x;

	for (x = 0 ; dest[x] != '\0' ; x++)
		dln++;
	for (x = 0 ; src[x] != '\0' ; x++)
		sln++;
	for (x = 0 ; x <= sln ; x++)
		dest[dln + x] = src[x];
	return (dest);
}

