#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches for a set of bytes in a string.
 * @s: The string to search.
 * @accept: The set of bytes to search for.
 * Return: A pointer or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}

