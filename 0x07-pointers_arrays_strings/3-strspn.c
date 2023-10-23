#include "main.h"

/**
 * _strspn - the function gets the length of a prefix substring
 * @s: initail segment s
 * @accept: input
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, n, value, check;

	value = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[x])
			{
				value++;
				check = 1;
			}
		}

		if (check == 0)
			return (value);
	}

	return (value);
}
