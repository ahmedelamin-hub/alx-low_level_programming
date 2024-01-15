#include "main.h"

/**
 * _strlen - gives us the string length
 * @s: the string pointer
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}

