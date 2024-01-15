#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that Returns a pointer to the first occurrence
 * @s: the string
 * @c: the charachter we intend to return
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0' ; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return (NULL);
}

